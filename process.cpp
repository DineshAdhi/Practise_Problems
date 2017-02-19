#include<iostream>
#include<queue>
using namespace std;
int main()
{
  int i,n;
  cin>>n;
  std::queue<int> a,b;
  for(i=0;i<n;i++)
  {
    int data; cin>>data;
    a.push(data);
  }
  for(i=0;i<n;i++)
  {
    int data; cin>>data;
    b.push(data);
  }
  int count=0;
  while(!a.empty())
  {
    if(a.front()==b.front())
    {
      a.pop();
      b.pop();
      count++;
    }
    else
    {
      a.push(a.front());
      a.pop();
      count++;
    }
  }
  cout<<"\n"<<count;

}
