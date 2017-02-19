#include<iostream>
using namespace std;
int main()
{
  int i,n;cin>>n;
  int *a=new int[n];
  for(i=0;i<n;i++)
      cin>>a[i];
  if(n==2)
  {
    if(a[1]==a[0])
      cout<<"YES";
    else
      cout<<"NO";

    return 0;
  }
  else
  {
    for(i=0;i<n;i++)
    {
      if(a[i] < a[i+1])
      {
        a[i+1]-=a[i];
        a[i]=0;
      }
      else
      {
        cout<<"NO"; return 0;
      }
    }

    if(a[n-1]==0)
      cout<<"YES";
    else
      cout<<"NO";
  }
}
