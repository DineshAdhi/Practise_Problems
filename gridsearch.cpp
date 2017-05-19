#include<iostream>
using namespace std;

int check(char **a, char **b, int r, int c, int sr, int sc, int iti, int itj)
{
  int i,j;
  for(i=0;i<sr;i++)
  {
    for(j=0;j<sc;j++)
    {
      if(iti+i >=r ||itj+j >=c)
        return 0;
      if(b[i][j]!=a[iti+i][itj+j])
        return 0;
    }
  }

  return 1;
}

void print(char **a, char **b, int r, int c, int sr, int sc)
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(a[i][j] == b[0][0])
      {
        if(check(a,b,r,c,sr,sc,i,j))
        {
          cout<<"YES\n";
          return;
        }
      }
    }
  }

  cout<<"NO";
}

int main()
{
  int t; cin>>t;

  while(t--)
  {
    int r,c,i,j; cin>>r>>c;
    char **a, **b;
    a = new char*[r];

    for(i=0;i<r;i++)
      a[i] = new char[c];

    for(i=0;i<r;i++)
    {
      string s; cin>>s;
      for(j=0;j<s.size();j++)
        a[i][j] = s[j];
    }

    int sr,sc; cin>>sr>>sc;

    b = new char*[sr];

    for(i=0;i<sr;i++)
      b[i] = new char[sc];

    for(i=0;i<sr;i++)
    {
      string s; cin>>s;
      for(j=0;j<s.size();j++)
        b[i][j] = s[j];
    }

    print(a,b,r,c,sr,sc);
  }
}
