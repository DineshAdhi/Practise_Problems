#include<iostream>
using namespace std;

int recursiveCheck(char **a, int i, int j,char c, int n)
{
  if(i>=n || i<0 || j>=n || j<0)
    return 0;

  if(a[i][j]!=c)
    return 0;

  if(i<n && a[i+1][j]!=c)
    return 0;

  if(j<n && a[i][j+1]!=c)
    return 0;

  return 1 + min(recursiveCheck(a,i+1,j,c,n), recursiveCheck(a,i,j+1,c,n));
}

int main()
{
  char **a; int i,j,n; cin>>n;
  a= new char*[n];

  for(i=0;i<n;i++)
    a[i] = new char[n];

  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    cin>>a[i][j];

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]==a[i+1][j] && a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j+1])
      {
        cout<<recursiveCheck(a,i,j,a[i][j],n)<<" ";
        return 0;
      }
    }
  }

  cout<<"0";
}
