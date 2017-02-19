#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  map<int,int> b;

  vector<int> s,q;
  int n,i,j;  cin>>n;

  for(i=0;i<n;i++)
  {
    int k; cin>>k;
    s.push_back(k);
  }

  cin>>n;

  for(i=0;i<n;i++)
  {
    int k; cin>>k;
    q.push_back(k);
    b[k]=1;
  }

  vector<int> res;

  for(i=0;i<s.size();i++)
  {
    if(b[s[i]]==1)
      res.push_back(s[i]);
  }

  sort(res.begin(), res.end());

  for(i=0;i<res.size();i++)
    cout<<res[i]<<" ";



}
