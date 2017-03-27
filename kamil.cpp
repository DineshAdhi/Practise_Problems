#include<iostream>
using namespace std;

int main()
{
  int t=10;

  while(t--)
  {
    string a; cin>>a;
    int res = 0, i;

    for(i=0;i<a.size();i++)
    {
      if(a[i]=='L' || a[i]=='F')
      {
        if(!res)
          res = 2;
        else
          res*=2;
      }
      else if(a[i]=='T')
      {
        res++;
      }
      else if(a[i]=='D')
      {
        res++;
      }
    }

    cout<<res;

  }
}
