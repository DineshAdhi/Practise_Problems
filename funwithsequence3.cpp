#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

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
  }

  int min = (s.size() < q.size()) ? s.size() : q.size();

  for(i=0;i<min;i++)
  {
    if(s[i]==q[i])
    {
      cout<<i+1<<" ";
    }
  }
}
