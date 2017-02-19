#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,i,j=0;
  cin>>n;
  vector<int> a(n);
  a[0]=0;
  a[1]=1;
  for(i=2;i<=n;i++)
  {
    a[i]=(a[i-1]+a[i-2])%10;
  }

  cout<<a[n];




}
