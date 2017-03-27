#include<iostream>
#include<stdio.h>
using namespace std;
void swap(char *a, char *b)
{
  char temp = *a;
  *a=*b;
  *b=temp;
}
int main()
{
  char s[100];
  gets(s);

  int i, len=0;
  for(i=0;s[i]!='\0';i++)
  {
    len++;
  }

  for(i=0;i<len/2;i++)
  {
    swap(s[i],s[len-i-1]);
  }

  for(i=0;s[i]!='\0';i++)
  {
    cout<<s[i];
  }
}
