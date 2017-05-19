#include<iostream>
using namespace std;

void recursive(int **a, int i, int j, int *k,int n)
{
  if(i<0 || i>=n || j<0 || j>=n)
    return;

  if(a[i][j]!=0)
    return;

  a[i][j] = *k;
  *k +=1;

  recursive(a,i,j+1,k,n);
  recursive(a,i+1,j,k,n);
}

int main()
{
  int **a; int n; cin>>n;
  int i,j;
  a= new int*[n];
  for(i=0;i<n;i++)
    a[i] = new int[n];

  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    a[i][j] = 0;

  int k =1;

  recursive(a,0,0,&k,n);

cout<<"\n";

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
}
