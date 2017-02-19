#include<iostream>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int i,a[100000],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int count=1;
    for(i=1;i<n;i++)
    {
      if(a[i]<a[i-1])
      count++;
      else
      a[i]=a[i-1];
    }
    cout<<count<<"\n";

  }
}
