#include<iostream>
#include<queue>
using namespace std;
int main()
{
  queue<int> a;
  int n,d;
  cin>>n>>d;
  while(n--)
  {
    int x;
    cin>>x;
    a.push(x);
  }
  while(d--)
  {
    int s=a.front();
    a.pop();
    a.push(s);
  }
  while(!a.empty())
  {
    cout<<a.front();
    a.pop();
  }
}
