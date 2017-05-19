#include<iostream>
using namespace std;


void print(int **a, int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
}

void recursive(int **a, int i, int j, int n, int s)
{
  if(j<0 || i<0)
    return;

  if(i>=n || j>=n)
    return;

  if(a[i][j]!=0)
    return;

  a[i][j] = s++;
  recursive(a, i, j+1,n,s++);
  recursive(a,i+1,j,n,s++);
}

int main()
{
  int n,i,j; cin>>n;

  int **a = new int*[n];

  for(i=0;i<n;i++)
    a[i] = new int[n];

  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    a[i][j]=0;

  recursive(a, 0, 0, n, 1);

  print(a, n);

}
