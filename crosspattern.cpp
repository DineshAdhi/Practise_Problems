#include<iostream>
using namespace std;

int main()
{
  int n; cin>>n;

  while(n--)
  {
    int m,n,i,j,c,d;
    cin>>m>>n>>c>>d;

    char **a;

    a=new char*[m];

    for(i=0;i<n;i++)
      a[i]=new char[n];

    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        if(i==c-1)
          a[i][j]='*';
        else if(j==d-1)
          a[i][j]='*';
        else
          a[i][j]='.';

        cout<<a[i][j]<<"";
      }
      cout<<"\n";
    }
  }
}
