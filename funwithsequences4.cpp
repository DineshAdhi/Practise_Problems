#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main()
{
  vector<int> a,b; int i,j,n,x; cin>>n>>x;

  for(i=0;i<n;i++)
  {
    int s; cin>>s; a.push_back(s);
  }

  for(i=0;i<n;i++)
  {
    int s; cin>>s; b.push_back(s);
  }

  vector<int> res;

  for(i=0;i<n;i++)
  {
    int flag=0;
    if(a[i]==b[i])
    {
      res.push_back(i+1); continue;
    }

    for(j=i;j<=i+x && i+x<n ;j++)
    {
      if(a[i]==b[j])
      {
        flag=1;
        res.push_back(i+1); break;
      }
    }

    if(flag)
      continue;

    for(j=i; j>=i-x && i-x>0 ; j--)
    {
      if(a[i]==b[j])
      {
        res.push_back(i+1); break;
      }
    }
  }

  sort(res.begin(), res.end());

  for(i=0;i<res.size();i++)
    cout<<res[i]<<" ";
}
