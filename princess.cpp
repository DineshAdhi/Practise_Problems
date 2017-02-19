#include<iostream>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int i,j,s,n,m;
    cin>>n>>m;
    int a[n],b[n];

    for(i=1;i<=n;i++)
    {
      cin>>a[i];
    }

    for(j=0;j<m;j++)
    {
      b[1]=a[2];
      b[n]=a[n-1];
      for(i=2;i<=n-1;i++)
      {
        if(a[i-1] && a[i+1])
          b[i]=1;
        else
          b[i]=0;
      }
      for(s=1;s<=n;s++)
      {
        a[s]=b[s];
      }
    }

    for(i=1;i<=n;i++)
    {
      cout<<b[i]<<" ";
    }
  }

}
