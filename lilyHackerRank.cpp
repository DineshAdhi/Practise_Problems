#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int i,j,n,res=0,res1=0; cin >> n;
  int a[n],b[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    b[i]=a[i];
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i] > a[j])
      {
        swap(&a[i], &a[j]);
        res++;
      }
    }
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i] < a[j])
      {
        swap(&a[i], &a[j]);
        res1++;
      }
    }
  }

  if(res>res1)
  cout<<res1;
  else
  cout<<res;
}
