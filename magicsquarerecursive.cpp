#include<iostream>
using namespace std;


void magicrecursive(int **a, int i, int j, int len, int s, int n)
{
  if(len==0)
    return;

  a[i][j] = s;

  int ti,tj;

  ti = i-1; tj=j+1;

  ti = (ti<0)?n-1:ti;
  tj = (tj>=n)?0:tj;

  if(a[ti][tj]!=0)
  {
     magicrecursive(a,i, j-1,len-1, s+1, n);
  }
  else
  {
    magicrecursive(a, ti, tj, len-1, s+1, n);
  }

}

int main()
{
  int n; cin>>n;
  int **a = new int*[n], i, j;

  if(!(n&1))
  {
    cout<<"Only odd numbers are allowed"; return 0;
  }

  for(i=0;i<n;i++)
    a[i] = new int[n];

  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    a[i][j] = 0;

  magicrecursive(a, n/2, n-1, n*n, 1, n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      cout<<a[i][j]<<" ";

    cout<<"\n";
  }

}
