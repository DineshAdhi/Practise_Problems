#include<iostream>
using namespace std;
int gcd(int a, int b)
{
  if(a==0)
    return b;
  else
  {
    int d = b%a;
    return gcd(d,a);
  }
}

int main()
{
  int i,j,l,m,n; cin>>l>>m>>n;
  int res=0;
  for(i=l;i<=m;i++)
  {
    for(j=l;j<=m;j++)
    {
      if(gcd(i,j)==n)
        res++;
    }
  }

  cout<<res<<"\n";
}
