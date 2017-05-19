#include<iostream>
using namespace std;

int main()
{
  int a=1,i;

  int res = 0;

  for(i=0;i<4;i++)
  {
       bool r = (bool)(a & (1 << i));
       cout<<r;
       res = res | (r << (4-i-1));
  }
  cout<<"\n\n";
  for(i=0;i<4;i++)
  {
    cout<<(bool)(res & (1<<i));
  }
  cout<<"\n";
  cout<<res;
}
