#include<iostream>
#include<stack>
using namespace std;
int main()
{
  stack<int> a;
  int n,temp=0,count=0;
  cin>>n;
  while(n--)
  {
    char ch;
    cin>>ch;
    if(ch=='a')
    {
      int s;
      cin>>s;
      a.push(s);
    }
    else if (ch =='b')
    {
      count++;
      if(count<2)
      {
        temp=a.top();
        a.pop();
      }
      else
      {
        a.push(temp);
        count=0;
      }
    }
    cout<<"\t\t"<<a.top();

  }
}
