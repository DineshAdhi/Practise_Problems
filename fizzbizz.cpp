#include<iostream>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
      if(i%3==0 && i%5==0)
      {
        cout<<"FizzBuzz\n";
      }
      else if(i%3==0)
      {
        cout<<"Fizz\n";
      }
      else if(i%5==0)
      {
        cout<<"Buzz\n";
      }
      else
      {cout<<i<<"\n";}
    }
  }
}
