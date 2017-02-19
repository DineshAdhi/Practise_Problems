#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
int main()
{
  int i;
  string a;
  queue<char> operand;
  cin>>a;

  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='+' || a[i]=='-' || a[i]=='/' || a[i]=='*')
    {
      operand.push(a[i]);
    }
    else
    {
      cout<<a[i];
    }
  }

  while(!operand.empty())
  {
    cout<<operand.back();
    operand.pop();
  }
}
