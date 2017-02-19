#include<iostream>
#include<math.h>
using namespace std;
int countprime(int n)
{
  int count=0;

  while(n%2==0)
  {
    count++;
    n=n/2;
  }

  cout<<sqrt(n)<<" ";

  for(int i=3;i<=sqrt(n);i=i+2)
  {
    while(n%i==0)
    {
      count++;
      n=n/i;
    }
  }

  if(n>2)
    count++;

  return count;
}
void kprime(int k,int m)
{
  for(int i=1,num=2;i<=m;num++)
  {
    if(countprime(num)==k)
    {
      cout<<num<<" ";
      i++;
    }
  }
}
int main()
{
  int k,m;
  cin>>m;
  cin>>k;
  kprime(k,m);
  return 0;
}
