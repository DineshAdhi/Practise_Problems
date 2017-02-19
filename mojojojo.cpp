#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,x; cin>>n>>x;
    if(n%2==0)
    {
      cout<<"Jojo"<<"\n";
    }
    else
    {
      int s=log2(x);
      if(s%2==0)
        cout<<"Jojo";
      else
        cout<<"Mojo";
    }
  }
}
