#include<iostream>
using namespace std;
int gcd(int a, int b){
  if(b!=0)
  {
    return gcd(b,a%b);
  }
  else
  return a;
}

int main()
{
  int N; cin>>N;
  int i,a[N],b[N];
  for(i=0;i<N;i++)
  {
    cin>>a[i]; b[i]=0;
  }
  for(i=0;i<N;i++){
    for(int j=i+1;j<N;j++)
    {
        if(gcd(a[i],a[j]) > 1)
        {
          if(b[j]==0)
          {
            b[j]=i+1; b[i]=j+1;
          }else if(b[i] > j){
            b[j]=i; b[i]=j;
          }

        }
    }
  }

  for(i=0;i<N;i++)
  {
    if(b[i]==0)
    cout<<"-1"<<" ";
    else
    cout<<b[i]<<" ";
  }
}
