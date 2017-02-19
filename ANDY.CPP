#include <iostream>
using namespace std;
int n;
int findLargest(int *arr)
{
  int i,res=-1, pos=0;
  for(i=0;i<n;i++)
  {
    if(res < arr[i])
    {
      res=arr[i];
      pos=i;
    }
  }

  for(i=pos; i<n;i++)
    arr[i]=0;

  for(i=0; i<n;i++)
    cout<<arr[i]<<" ";

  cout<<"\n\n";

  if(res==0)
    return -1;
  else
    return pos;

}
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int i; cin>>n; int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];

    int temp=0;

    while(findLargest(a)!=-1)
    {
      temp++;
    }

    if(temp%2 == 0)
      cout<<"ANDY"<<"\n";
    else
      cout<<"BOB"<<"\n";
  }
}
