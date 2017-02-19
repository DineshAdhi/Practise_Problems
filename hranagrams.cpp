#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
  unordered_map<string,int> ua,ub;
  string a,b;
  cin>>a;
  for(int i=0;a[i]!='\0';i++)
  {
    ua.insert("asdf",1);
    cout<<ua.find(a[i])<<" ";
  }
}
