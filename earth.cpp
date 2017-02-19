#include<iostream>
using namespace std;
int main()
{
  string a,c;
  while(getline(cin,a))
  {
    for(int i=0;i<a.size();i++)
    {
      if(a[i]=='/' && a[i+1]=='/')
      {
        c+="//";
        i++;
      }
    }
  }

  cout<<c;
}
