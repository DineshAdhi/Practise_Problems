#include<iostream>
using namespace std;
class stack
{
public:
  int arr[100];
  int top=0;

  void insert(int data)
  {
    arr[top]=data;
    top=top+1;
  }

  void pop()
  {
    cout<<arr[top-1];
    top--;
  }
};
int main()
{
  stack s;
  for(int i=0; i<10; i++)
    s.insert(i);

  s.pop();
}
