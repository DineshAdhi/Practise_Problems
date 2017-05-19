#include<iostream>
using namespace std;

string recursive(int n)
{
  if(n==0)
    return "3";
  if(n==1)
    return "4";

  return recursive((n/2)-1)+((n&1)?"4":"3");
}



int main()
{
  int n; cin>>n;
  for(int i=1;i<=n;i++)
  {
    cout<<recursive(i)<<" ";
  }
}
