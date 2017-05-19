#include<iostream>
#include<vector>
using namespace std;
#define rep(i,x) for(i=0;i<x;i++)

int main()
{
  int t; cin>>t;

  while(t--)
  {
    int n,i,cost=0; cin>>n;
    int a[n];

    rep(i,n)
    {
      cin>>a[i];
    }

    rep(i,n)
    {
      if(i>0)
      {
        int s=i;
        while(a[s] < a[s-1])
        {
          swap(a[s], a[s-1]);
          cost++; s= s-1;
        }
      }
    }

    cout<<cost<<"\n";
  }
}
