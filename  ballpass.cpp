#include<iostream>
#include<stack>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int N,id;
    cin>>N>>id;
    stack<int> s;
    while(N--)
    {
      char c;
      cin>>c;
      if(c=='B')
      {
        int second=s.top(); s.pop();
        int first=s.top(); s.pop();

        s.push(first);
        s.push(second);
        continue;
      }
      int i; cin>>i;
      s.push(i);
    }
    cout<<s.top();
  }
}
