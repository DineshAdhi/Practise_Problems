#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
  int d;

  if(b==0)
    return a;
  else
    d=a%b;
    return gcd(b,d);
}

void sort(int *a, int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
}

int lcm(int a, int b)
{
  int g=gcd(a,b);
  return (a*b)/g;
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    sort(a,n);
    cout<<lcm(a[0], a[1])<<"\n";
  }
}
