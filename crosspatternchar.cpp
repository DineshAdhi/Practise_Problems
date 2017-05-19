#include<iostream>
using namespace std;

int main()
{
  string s; cin>>s;

  int n = s.size();
  char a[n][n];
  int i,j;

  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    a[i][j]=' ';

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
        a[i][j]=s[i];

      if(i+j==n-1)
        a[i][j] = s[n-i-1];
    }
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
}
