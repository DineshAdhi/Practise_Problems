#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n,i; cin>>n;
  vector<int> a;
  a.push_back(0);
  a.push_back(1);
  for(i=0;i<n;i++)
  {
    int j;
    for(int s=0; s<n-i; s++)
    {
      cout<<" ";
    }
    vector<long long int> b;
    b.push_back(0);
    for(j=0;j<i+1;j++)
    {
      cout<<a[j]+a[j+1]<<" ";
      b.push_back(a[j]+a[j+1]);
    }
    b.push_back(0);
    cout<<"\n";
    a.swap(b);
  }
}
