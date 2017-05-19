#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void removeParenthesis(string s)
{
  int i;
  queue<int> right, left;
  for(i=0;i<s.size();i++)
  {
    if(s[i]=='(')
      left.push(i);

    if(s[i]==')')
    {
      if(!left.empty())
        left.pop();
      else
        right.push(i);
    }
  }

  while(!right.empty())
  {
    s[right.front()]='1';
    right.pop();
  }

  cout<<"\n";

  while(!left.empty())
  {
    s[left.front()]='1';
    left.pop();
  }


  for(i=0;i<s.size();i++)
  {
    if(s[i]!='1')
      cout<<s[i];
  }


}

int main()
{
  string s; cin>>s;

  removeParenthesis(s);
}
