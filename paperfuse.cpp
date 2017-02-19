#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    long int a,b,i,sum=0;
    cin>>a>>b;
    long long int start=pow(a+1,2)-pow(a,2);
    int n=(b-a)+1;
    if(n%2!=0)
    {
      sum=b*b;
      b=b-1;
    }
    long long int end=pow(b,2)-pow(b-1,2);
    n=n/2;
    long long int totalSum=(start+end)/2 * n;
    sum=sum+totalSum;
    cout<<sum%1000000007<<"\n";
  }
}
