#include<iostream>
#include<string>
#include<vector>
using namespace std;

void reverse(char *s, int i, char *a, int len)
{
  if(i==-1)
  {
    a[len-i] = '\0';
    return;
  }

  a[len-i] = s[i];

  reverse(s,i-1,a, len);
}

int main()
{
  char *s = new char[100];
  fgets(s,100, stdin);
  int count=0, i=0;
  while(s[i]!='\0')
  {
    count++; i++;
  }

  char *a = new char[count];
  reverse(s, count, a, count);

  for(i=0;i<count;i++)
  {
    cout<<a[i];
  }


}
