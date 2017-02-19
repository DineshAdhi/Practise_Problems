#include<iostream>
#include<string>
using namespace std;
int main()
{
  string inputstring;
  cin>>inputstring;

  int notimes;
  char char_to_repeat='0';

  for(int i=0;i<inputstring.length();i++)
  {
    notimes=0;
    if(inputstring[i]>='0' && inputstring[i]<='9')
    {
      while(inputstring[i]>='0' && inputstring[i]<='9')
      {
        notimes=(notimes*10)+(int)(inputstring[i]-48);
        i++;
      }
      i=i-1;
      for(int j=0;j<notimes;j++)
      {
        cout<<char_to_repeat;
      }
    }
    else
    {
      char_to_repeat=inputstring[i];
    }
  }
}
