#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
  int t; cin>>t;
  while(t--)
  {
    int m,n,a,b,i,j; cin>>m>>n>>a>>b;

    for(i=1;i<=m;i++)
    {
      for(j=1;j<=n;j++)
      {
        if(i+j==a+b)
          cout<<"*";
        else if(i+abs(a-b)==j)
          cout<<"*";
        else
          cout<<".";
      }
      cout<<"\n";
    }
  }
}
