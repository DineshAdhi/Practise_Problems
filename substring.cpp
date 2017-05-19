#include<iostream>
using namespace std;
int check(string s, string a, int i)
{
  int j;
  for(j=0;j<a.size();j++)
  {
    //cout<<s[i+j]<<" "<<s[j]<<"\n";
    if(s[i+j]!=a[j])
      return 0;
  }
  return 1;
}
int main()
{
  string s; cin>>s;
  string a; cin>>a;
  int i,j;

  for(i=0;i<s.size();i++)
  {
    if(s[i]==a[0])
    {
        if(check(s,a,i))
        {
          cout<<"Fount at :"<<i; return 0;
        }
    }
  }

  cout<<"-1";
}
