
#include<iostream>
using namespace std;
int main()
{
  int a,b,res;
  cin>>a>>b;
  res=(a/2)*(b/2);
  if(a%2==0 && b%2==0)
  {
  cout<<res;
  return 0;
  }
  else
  {
    int undropped= (a*b) - ((a-1)*(b-1));
    res+= undropped/2;
    res+=undropped%2;
    cout<<res;
  }
}
