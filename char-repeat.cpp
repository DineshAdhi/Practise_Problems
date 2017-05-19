#include<iostream>
using namespace std;

int main()
{
  string s; cin>>s;
  int i=0, print =0;
  char a;

  while(true)
  {
    if(s[i]=='\0')
    {
      for(int k=0;k<print;k++)
        cout<<a;

      break;
    }
    if(s[i]-48 >=0 && s[i]-48 <=9)
    {
      print = print*10 + s[i]-48;
    }
    else
    {
      for(int s=0;s<print;s++)
        cout<<a;

      a = s[i]; print=0;
    }
    i++;
  }
}
