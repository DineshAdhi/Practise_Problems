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
  int i,n,flag=0;
  cin>>n;
  for(i=2;i<n;i++)
  {
    if(checkPrime(i))
    {
      if(n%i==0 && checkPrime(n/i))
      {
        flag=1; break;
      }
    }
  }
  if(flag)
  {
    cout<<"Yes it s the mul of two numbers "<<i<<" "<<n/i<<"\n";
  }
  else
  {
    cout<<"No it is not"<<"\n";
  }
}
