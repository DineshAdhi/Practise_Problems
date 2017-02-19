#include<iostream>
#include<stack>
using namespace std;
int main()
{
  stack<int> a,b;
  int t;
  cin>>t;
  while(t--)
  {
    int x;
    cin>>x;
    if(x==1)
    {
      int y;
      cin>>y;
      a.push(y);
      if(b.empty())
      {
        b.push(y);
      }
      else if(b.top()<y)
      {
        b.push(y);
      }
    }
    else if(x==2)
    {
      if(a.top()==b.top())
      {
        b.pop();
      }
      a.pop();
    }
    else if(x==3)
    {
      cout<<b.top();
    }
  }
}
