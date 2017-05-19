#include<iostream>
using namespace std;
void merge(int *a, int l, int m, int r)
{
    int i,j,k;
    int n1 = (m - l + 1);
    int n2 = (r-m);

    int L[n1], R[n2];

    for(i=0;i<n1;i++)
      L[i] = a[l+i];

      for (j = 0; j < n2; j++)
        R[j] = a[m+j+1];

    i=j=0; k=l;

    while(i<n1 && j<n2)
    {
      if(L[i] <= R[j])
      {
        a[k] = L[i];
        i++;
      }
      else
      {
        a[k] = R[j];
        j++;
      }
      k++;
    }

    while(i<n1)
    {
      a[k] = L[i]; i++; k++;
    }
    while(j<n2)
    {
      a[k] = R[j]; j++; k++;
    }
}
void mergeSort(int *a, int l, int r)
{
  if(l<r)
  {
    int m = l + (r-l)/2;

    mergeSort(a, l, m);
    mergeSort(a, m+1, r);
    merge(a, l, m, r);
  }
}

int main()
{
  // int n,i,j; cin>>n;
  // int *a= new int[n];
  //
  // for(i=0;i<n;i++)
  // {
  //   cin>>a[i];
  // }
  //
  // int arr_size = sizeof(a)/sizeof(a[0]);
  //
  // mergeSort(a,0,n-1);
  //
  // for(i=0;i<n;i++)
  //   cout<<a[i]<<" ";


  int a[] = {88,1,4,3,2};
  int arr_size = sizeof(a)/sizeof(a[0]);
  mergeSort(a, 0, arr_size-1);

  for(int j=0;j<arr_size;j++)
  {
    cout<<a[j]<<" ";
  }
}
