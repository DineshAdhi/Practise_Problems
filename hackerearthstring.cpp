#include<iostream>
#include<string>
using namespace std;
int checkCondition(int h,int a, int c,int k,int e,int r,int t)
{
  if(h>=2 && a>=2 && e>=2 && c>=1 && k>=1 && r>=2 && t>=1)
  return 1;
  else
  return false;
}
int main()
{
  int i=0,h=0,a=0,c=0,k=0,e=0,r=0,t=0;
  string x;
  cin>>x;
  int count=0;
  while(x[i]!='\0')
  {
    switch(x[i])
    {
      case 'h':
        h++;
        break;
      case 'a':
        a++;
        break;
      case 'c':
        c++;
        break;
      case 'k':
        k++;
        break;
      case 'e':
        e++;
        break;
      case 'r':
        r++;
        break;
      case 't':
        t++;
        break;
    }
      i++;
  }

  while(checkCondition(h,a,c,k,e,r,t))
  {
    count++;
    h-=2; a-=2; c-=1; k-=1; e-=2; r-=2; t-=1;
  }


  cout<<count;
}
