#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a; int b;
  cin>>a>>b;

  for(int i=0 ;i<b;i++)
    a[i]='9';

  cout<<a;
}
