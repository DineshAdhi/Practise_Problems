#include<iostream>
using namespace std;
int gcd(long int a,long int b)
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
  cout<<gcd(a,b);
  return 0;
}
