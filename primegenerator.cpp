#include<iostream>
#include<math.h>
using namespace std;
int prime(long int a)
{
  for(int i=2;i<=sqrt(a);i++)
  {
    if(a%i==0)
      return 0;
  }
  return 1;
}
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int a,b;
    cin>>a>>b;
    for(long int i=a;i<=b;i++)
    {
      if(i==1)
        continue;
      if(prime(i))
        cout<<i<<"\n";
    }
  }
}
