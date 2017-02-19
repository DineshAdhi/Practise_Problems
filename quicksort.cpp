#include<iostream>
using namespace std;
void swap(int *a,int i,int j)
{
  int temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
void quicksort(int *a, int left, int right)
{
  int i=left;
  int j=right;
  int min=(left+right)/2;
  int pivot=a[min];

  while(left<j || right>i)
  {
    while(a[i]>pivot)
    i++;
    while(a[j]<pivot)
    j--;

    if(i<=j)
    {
      swap(a,i,j);
      i++;
      j--;
    }
    else
    {
      if(i<right)
      quicksort(a,i,right);
      if(left<j)
      quicksort(a,left,j);
      return;
    }
  }
}
int main()
{
  int n;
  cin>>n;
  int i,a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  quicksort(a,0,n-1);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
