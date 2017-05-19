#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
  map<int,int> mp;
  vector<int> a;
  int n; cin>>n;
  while(n--)
  {
    int s; cin>>s;
    if(mp[s]==0)
      a.push_back(s);
    mp[s]++;
  }
  int count = 0;
  for(int i=0;i<a.size();i++)
  {
    count += mp[a[i]]/2;
  }

  cout<<count<<" ";
}
