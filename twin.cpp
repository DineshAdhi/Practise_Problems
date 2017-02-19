#include<iostream>
using namespace std;
int checkPrime(int n)
{
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
      return 0;
  }
   return 1;
}
int main()
{
    int i,a,b,res=0;
    cin>>a>>b;
    for(i=a; i<=b-2; i++)
    {
      if(checkPrime(i) && checkPrime(i+2))
        res++;
    }
    cout<<res;
}
