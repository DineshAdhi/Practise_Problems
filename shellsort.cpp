#include<iostream>
using namespace std;
int main()
{
  int n; cin>>n;
  int a[n];
  int i,j,gap;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(gap=n/2;gap>0;gap/=2)
  {
    for(i=gap;i<n;i++)
    {
      int temp=a[i];
      for(j=i;j>=gap && temp > a[j-gap]; j=j-gap)
      {
        a[j]=a[j-gap];
      }
      a[j]=temp;
    }
  }

  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

}
