#include<iostream>
#include<vector>
using namespace std;
bool check(int a)
{
  for(int i=2;i<=a/2;i++)
  {
    if(a%i==0)
    return 0;
  }
  return 1;
}
int main()
{
  vector<int> a;
  for(int i=2;i<100;i++)
  {
    if(check(i))
    {
      a.push_back(i);
    }
  }
  while(!a.empty())
  {
    cout<<a.back()<<" ";
    a.pop_back();
  }
}
