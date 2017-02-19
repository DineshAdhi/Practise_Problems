#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  int a[50][50];
  cout<<"Enter an odd number : ";
  cin>> n;
  int x=(n-1)/2,y=n-1;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
    a[i][j]=0;
  }

for(int s=1;s<=n*n;s++)
{
  if(a[x][y]==0)
  {
    a[x][y]=s;
    int tempx=x,tempy=y;
    x=x-1;y=y+1;
    if(y>n-1)
    {
      y=0;
    }
    if(x<0)
    {
      x=n-1;
    }
    if(!a[x][y]==0)
    {
      x=tempx;
      y=tempy;
      y=y-1;
    }
  }
}

for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    cout<<a[i][j]<<"     ";
  }
  cout<<"\n";
}

}
