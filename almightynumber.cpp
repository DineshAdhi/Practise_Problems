#include<iostream>
#include<map>
using namespace std;

int check(int a)
{
  int count = 0,i;
  map<int,int> m;
  while(a!=0)
  {
    int r = a%10;
    m[r] = (m[r]==0)?1:0;
    a = a/10;
    count++;
  }

  for(i=1;i<=count;i++)
  {
    if(m[i]==0)
      return 0;
  }

  return 1;
}

int main()
{

  cout<<check(211);
  // int t; cin>>t;
  //
  // while(t--)
  // {
  //   int i,j,a,b; cin>>a>>b;
  //
  //   for(i=a; i<=b;i++)
  //   {
  //
  //   }
  // }
}
