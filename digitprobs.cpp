#include<iostream>
#include<stack>
using namespace std;
int main()
{
  stack<int> arr;
  int i,a,b,rem,sum;
  cin>>a>>b;
  while(a!=0)
  {
    rem = a%10;
    arr.push(rem);
    a=a/10;
  }

  for(i=0;i<b;i++)
    arr.pop();

  for(i=0;i<b;i++)
    arr.push(9);

  while(!arr.empty())
  {
    cout<<arr.top();
    arr.pop();
  }
}
