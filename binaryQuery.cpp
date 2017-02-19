#include<iostream>
using namespace std;
int power(int a, int s)
{
  int res=1;
  for(int i=0;i<s;i++)
  {
    res=res*a;
  }
  return res;
}
int check(int *arr, int l ,int r)
{
  int res=1,s=0;
  for(int i=r;i>=l;i--)
  {
    if(arr[i]==1)
    {
      res=res+power(2,s);
    }
    s++;
  }
  if(res%2==0)
    return 1;
  else
    return 0;
}
int main()
{
  int i,n,q;
  cin>>n>>q;
  int *arr=new int[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
  while(q--)
  {
    int query; cin>>query;
    if(query==0)
    {
      int l,r; cin>>l>>r;
      if(check(arr,l ,r))
        cout<<"EVEN";
      else
        cout<<"ODD";
    }
    if(query==1)
    {
      int x; cin>>x;
      arr[x]=!arr[x];
    }
    cout<<"\n";
  }
}
