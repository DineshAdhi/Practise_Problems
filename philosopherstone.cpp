#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
  stack<int> bag;
  int i,n,sum=0;
  cin>>n;
  int *a=new int[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  i=0;
  int q,x;
  cin>>q>>x;
  while(q--)
  {
    string str; cin>>str;
    if(str=="Harry")
    {
      sum+=a[i];
      bag.push(a[i]);
      if(sum==x)
      {
        cout<<bag.size()<<"\n";
        return 0;
      }
    i++;
    }
    else if(str=="Remove")
    {
      sum-=bag.top();
      bag.pop();
    }
  }
  cout<<"-1";
}
