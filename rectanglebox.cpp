#include<iostream>
using namespace std;

int main()
{
  int n,m; cin>>n>>m;

  char a[n][m]; int i,j;

  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  a[i][j]='.';

  int s=2, x=0;

  while(x<m/2-1)
  {
    for(i=x;i<n-x;i++)
    {
      a[i][x]='X';
      a[i][m-x-1]='X';
    }
    x=x+2;
  }

  x=0;

  while(x<n/2-1)
  {
    for(i=x;i<m-x;i++)
    {
      a[x][i]='X';
      a[n-x-1][i]='X';
    }
    x=x+2;
  }

  for(i=0;i<n;i++)
  {
  for(j=0;j<m;j++)
    cout<<a[i][j]<<" ";

  cout<<"\n";
  }


}
