#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> a(n),b(n);

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int j=1;j<n;j++)
  {
    int temp=a[j];
    for(int s=j-1;s>=0;s--)
    {
      if(temp>a[s])
      {
        a[s+1]=a[s];
        a[s]=temp;
      }
    }
  }

  for(int k=0;k<n;k++)
  {
    cout<<a[k]<<" ";
  }
}
