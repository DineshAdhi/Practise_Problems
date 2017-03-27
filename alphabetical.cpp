#include<iostream>
using namespace std;

int main()
{
  string a;


  cout<<5/2;

  int map[26],i,j,res=0;

  for(i=0;i<26;i++)
    map[i]=0;

  for(i=0;i<a.size();i++)
  {
    for(j=i+1; j<a.size();j++)
    {
      if(a[i]>a[j])
      {
          a[i] = '*';
          res++;
      }
    }
  }

  for(i=0;i<a.size();i++)
  {
    if(a[i]=='*')
    {
      map[a[i]-'a'] = 0; continue;
    }

    map[a[i]-'a'] = 1;
  }

  cout<<a<<"\n";

  for(i=0; i<26; i++)
  {
    if(map[i]==0)
      res++;
  }

  cout<<res;


}
