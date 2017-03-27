#include<iostream>
using namespace std;

int recursive(char **a, int i, int j, int n)
{
  if(i<0 || i>=n)
    return 0;

  if(j<0 || j>=5)
    return 0;

  if(j+2>=5)
    return 0;

  if(i+2>=n)
    return 0;

  if(a[i][j]=='T' && a[i+1][j]=='O' && a[i+2][j]=='O')
  {
    cout<<"("<<i<<","<<j<<")"<<" "<<"("<<i+2<<","<<j<<")";
    cout<<"\n\n";
    return 1;
  }

  if(a[i][j]=='T' && a[i][j+1]=='O' && a[i][j+2]=='O')
  {
    cout<<"("<<i<<","<<j<<")"<<" "<<"("<<i<<","<<j+2<<")";
    cout<<"\n\n";
    return 1;
  }
}

int main()
{
  string s = "WELCOMETOZOHOCORPORATION";

  int i,j, t=0;

  char **a;

  a=new char*[5];

  for(i=0;i<5;i++)
    a[i]=new char[5];

  for(i=0; i<=s.size()/5; i++)
  {
    for(j=0;j<5;j++)
    {
      a[i][j]=s[t++];
    }
  }

  for(i=0;i<=s.size()/5;i++)
  {
    for(j=0;j<5;j++)
    {
      cout<<a[i][j];
    }
    cout<<"\n";
  }

  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      recursive(a,i,j,5);
    }
  }
}
