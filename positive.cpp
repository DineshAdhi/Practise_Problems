#include<iostream>
using namespace std;
int main()
{
  int i,n;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int M;
  cin>>M;
  for(int j=0;j<M;j++)
  {
    int x;
    cin>>x;
    for(i=0;i<n;i++)
    {
      if(a[i]>x)
      {
        a[i]=a[i]-1;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
