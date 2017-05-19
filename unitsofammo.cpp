#include<iostream>
using namespace std;

int main()
{
  int t; cin>>t;
  while(t--)
  {
    int i,ans,n; cin>>ans>>n;

    for(i=0;i<n && ans>0;i++)
    {
      int a; cin>>a;
      if(a==0)
        ans = ans - 1;
      else
        ans = ans + 2;

      if(ans==0 && i!=n-1)
      {
        cout<<"No "<<i+1;
        break;
      }
    }

    if(i==n)
      cout<<"Yes "<<ans;

  }
}
