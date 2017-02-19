#include<iostream>
using namespace std;

int main()
{
  int t; cin>>t;

  while(t--)
  {
    int n,q; cin>>n>>q;
    int a[n][3]={{}},i,j;


    for(i=0;i<n;i++)
    {
      for(j=0;j<3;j++)
      {
        cout<<a[i][j];
      }
      cout<<"\n";
    }
  }
}
