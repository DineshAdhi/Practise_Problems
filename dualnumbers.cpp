#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int checkPrime(long int s)
{
  if(s==1)
  {
    return 0;
  }
  int i=0;
  for(i=2;i<s;i++)
  {
    if(s%i==0)
    return 0;
  }
  return 1;
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int i,n;
    cin>>n;
    vector<long int> a;
    for(i=0;i<n;i++)
    {
      long int s;
      cin>>s;
      if(checkPrime(s))
      {
        a.push_back(s);
      }
    }
    if(a.empty())
    {
      cout<<"-1"<<"\n";
      continue;
    }
    else if(a.size()==1)
    {
      cout<<a.front()*a.front()<<"\n";
      continue;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    cout<<a[0]*a[1];

  }
}
