#include<iostream>
using namespace std;
int checkX(int a[10][10],int n)
{
  for(int i=1;i<=n;i++)
  {
    int j=n-i+1;
    for(int p=1;p<=n;p++)
    {
      if(a[i][p]!=a[j][p])
      {
        return 0;
      }
    }
  }

  return 1;
}
int checkY(int a[10][10], int n)
{
  for(int i=1;i<=n;i++)
  {
    int j=n-i+1;
    for(int p=1;p<=n;p++)
    {
      if(a[p][i]!=a[p][j])
      {
        return 0;
      }
    }
  }

  return 1;
}
int main()
{
  int n;
  cin>>n;
  int a[10][10];
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
          cin>>a[i][j];
    }
  }

  cout <<"\n"<<checkX(a,n)<<" "<<checkY(a,n);
  if(checkY(a,n) && checkX(a,n))
  {
    cout<<"S";
  }
  else
  {
    cout<<"\nNS";
  }

}
