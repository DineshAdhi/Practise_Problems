#include<iostream>
#include<string.h>
#include<unordered_map>
using namespace std;
int main()
{
  int i,res=0;
  unordered_map<char,int> m;
  string name;
  cin>>name;

  for(i=0;i<name.size();i++)
  {
    if(m[name[i]]==0)
      m[name[i]]=1;
    else
      res++;
  }

  cout<<"\n";
  cout<<res;

}
