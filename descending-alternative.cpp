#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int n; cin>>n;
  int a[n],i,j;

  for(i=0;i<n;i++)
    cin>>a[i];

  for(i=0;i<n;i=i+2)
  {
    for(j=i+2;j<n;j=j+2)
    {
      if(a[i] < a[j])
      {
        swap(a[i], a[j]);
      }
    }
  }

  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
