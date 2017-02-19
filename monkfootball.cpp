#include<iostream>
#include<queue>
using namespace std;
int main()
{
  int i,M,N,sum=0;
  cin>>M>>N;
  priority_queue<int> q;
  for(i=0;i<M;i++)
  {
    int a;  cin>>a;
    q.push(a);
  }

  for(i=0;i<N;i++)
  {
    int top=q.top();
    sum=sum+top;
    top=top-1;
    q.pop();
    q.push(top);
  }

  cout<<"\n"<<sum;
}
