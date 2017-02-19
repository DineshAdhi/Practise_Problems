#include<iostream>
using namespace std;
int palindrome(long int a)
{
  int sum=0,rem,temp=a;
  while(a>0)
  {
    rem=a%10;
    sum=(sum*10) + rem;
    a=a/10;
  }

  if(temp==sum)
    return 1;
  else
    return 0;
}
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int a;
    cin>>a;
    for(long int i=a+1;i>=a;i++)
    {
      if(palindrome(i))
      {
        cout<<i<<"\n";
        break;
      }
    }
  }
}
