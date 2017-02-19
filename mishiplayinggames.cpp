#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int i,N,Q;
  cin>>N>>Q;
  int a[N];
  for(i=0;i<N;i++)
  {
    int c;
    cin>>c;
    c=log(c)+1;
    if(i==0)
    a[i]=c;
    else
    a[i]=a[i-1]+(c);
  }
  for(i=0;i<Q;i++)
  {
    int m,n;
    cin>>m>>n;
    int res=a[n-1]-a[m-2];
    if(res%2==0)
    {
      cout<<"Mishki"<<"\n";
    }
    else
    {
      cout<<"Hacker"<<"\n";
    }
  }
}
