#include<iostream>
using namespace std;

int gcd(int a, int b)
{
  int m=(a>b)?a:b;
  for(int i=m; i>0; i--)
  {
    if(a%i==0 && b%i==0)
      return i;
  }
  return 1;
}

int findLCM(int a, int b)
{
  return (a*b)/gcd(a,b);
}

int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n; int a[n],i;
    for(i=0;i<n;i++)
      cin>>a[i];

    int lcm= a[0];

    for(i=0;i<n;i++)
    {
      lcm = findLCM(lcm, a[i]);
    }

    cout<<lcm;
  }
}
