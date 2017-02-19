#include<iostream>
using namespace std;
int prime(int s)
{
  if(s==1)
  return 0;
  for(int i=2;i<s;i++)
  {
    if(s%i==0)
    return 0;
  }
  return 1;
}
int main()
{
  for(int i=1;i<1000;i++)
  {
    if(prime(i))
    {
      cout<<i<<" ";
    }
  }
}
