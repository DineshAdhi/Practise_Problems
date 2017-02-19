#include<iostream>
using namespace std;
long long gcd(long int a,long int b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    long int d=a%b;
    gcd (b,d);
  }
}

int main()
{
  long long a,b;
  cin>>a>>b;
  long long g=gcd(a,b);
  long long l=(a*b)/g;
  cout<<l;
  return 0;
}
