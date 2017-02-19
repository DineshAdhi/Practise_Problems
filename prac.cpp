#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int sum=0,i,n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int temp=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]==a[i+1]-1)
      {
        sum=sum+a[i];
      }
    }
    cout<<sum;
    if(sum==x)
    {
      cout<<"YES";
    }
    else
    {
      cout<<"NO";
    }
  }
}
