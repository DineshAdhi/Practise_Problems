#include<iostream>
using namespace std;
int main()
{
  int i,j,n,m,res=0,sum=0; cin>>n>>m;

  int **matrix; matrix = new int*[n];
  for(i=0;i<n;i++)
    matrix[i]= new int[m];

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
      cin>>matrix[i][j];
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      sum+=matrix[i][j];
    }
    if(res < sum)
      res = sum;

    sum=0;
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      sum+=matrix[j][i];
    }
    if(res < sum)
      res = sum;

    sum=0;
  }

  cout<<res;

}
