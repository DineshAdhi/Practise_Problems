#include<iostream>
using namespace std;
int main()
{
  int T; cin>>T;
  while(T--)
  {
    int c,k,w; cin>>c>>k>>w;
    if(c*w <=k)
      cout<<"yes\n";
    else
      cout<<"no\n";
  }
}
