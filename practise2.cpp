#include<iostream>
#include<stack>
using namespace std;
int main()
{
  stack<int> s,pass;
  int T,count;
  cin>>T;
  while(T--)
  {
    int N,a;
    cin>>N>>a;
    s.push(a);
    for(int i=0;i<N;i++)
    {
       char c;
       cin>>c;
       if(c=='P')
       {
         count=0;
         cin>>a;
         s.push(a);
       }
       else if(c=='B')
       {
         count++;
         pass.push(s.top());
         s.pop();
         if(count==2)
         s.push(pass.top());
       }

       cout<<"\t\t\t"<<s.top();
    }
  }

  cout<<s.top();
}
