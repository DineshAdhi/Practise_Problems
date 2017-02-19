#include "iostream"
using namespace std;
int main()
{
  int m,n=0;
  cin>>m;
  n=(m/10);
  m=m%10;
  n=n+(m/5);
  m=m%5;
  n=n+m;
  cout<<n;
}
