#include<iostream>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int i,n,h;
    cin>>n>>h;
    int *lan=new int[n];
    for(i=0;i<n;i++)
      cin>>lan[i];
    while(h--)
    {
      int *lan2=new int[n];
      lan2[0]=(lan[1]==1)?1:0;
      lan2[n-1]=(lan[n-2]==1)?1:0;
      for(i=1;i<n-1;i++)
      {
        lan2[i]=(lan[i-1]==1 && lan[i+1]==1)?1:0;
      }
      lan=lan2;
    }
    for(i=0;i<n;i++)
      cout<<lan[i]<<" ";

    cout<<"\n";
  }
}
