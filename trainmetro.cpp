#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  double n,m,k;
  cin>>n>>m>>k;

  double sum = 0;
  while(k--)
  {
      int r,a,b;  cin>>r>>a>>b;
      sum +=abs(a-b)+1;
  }

  double res = (n*m)-sum;

  printf("%.0f", res);
}
