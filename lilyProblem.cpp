#include<iostream>
using namespace std;
int reversed(int s)
{
  int res=0;
  while(s!=0)
  {
    res=(res*10)+(s%10);
    s=s/10;
  }
  return res;
}

int beautiful(int q)
{
    return (q-reversed(q));
}

int main()
{
  int i,j,k,q,res=0;
  cin>>i>>j>>k;
  for(q=i;q<=j;q++)
  {
    if(beautiful(q)%k==0)
    {
      res++;
    }
  }

  cout<<res;
}
