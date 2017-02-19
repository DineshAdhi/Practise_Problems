#include<iostream>
using namespace std;
long long t;
long long i,n,m,res;
int main()
{
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    if(n==0)
    {
      cout<<0<<"\n";
      continue;
    }
    res=m;
    for(i=1;i<m;i++)
    {
      if((i*i) % m == n)
      {
        if(res > i)
          res=i;
      }
    }

    if(res==m)
    {
      cout<<"-1\n"; continue;
    }

    cout<<res<<"\n";
  }
}
