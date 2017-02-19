#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int> a;
  int n,k,q;
  cin>>n>>k>>q;
  while(n--)
  {
    int x; cin>>x;
    a.push_back(x);
  }
  while(k--)
  {
    int s=a.back();
    a.pop_back();
    a.push_front(s);
  }
  while(q--)
  {
    int b; cin>>b;
    cout<<a[b]<<" ";
  }
}
