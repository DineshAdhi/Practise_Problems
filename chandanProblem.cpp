#include<iostream>
using namespace std;
int main()
{
  int n,i; cin>>n;
  long int sum=0;
  int *a=new int[n];
  for(i=0;i<n;i++)
  {
      cin>>a[i];
      if(a[i]==0)
        a[i-1]=0;
  }
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
    sum+=a[i];
  }
  cout<<" \n";


  cout<<sum;
}
