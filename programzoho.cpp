#include<iostream>
using namespace std;
int main()
{
  char a[7][7];
  int i,j;

  string s="PROGRAM";

  for(i=0;i<7;i++)
    for(j=0;j<7;j++)
      a[i][j]=' ';

  for(i=0;i<7;i++)
  {
    for(j=0;j<7;j++)
    {
      if(j==i)
        a[i][j]=s[i];

      if(j==6-i)
        a[i][j]=s[6-i];
    }
  }

  for(i=0;i<7;i++)
  {
    for(j=0;j<7;j++)
    {
      cout<<a[i][j];
    }
    cout<<"\n";
  }

}
