#include<iostream>
using namespace std;

int main()
{
  int s,t; cin>>s>>t;
  int a,b; cin>>a>>b;
  int m,n; cin>>m>>n;
  int apple[m], orange[n];
  int i=0;
  for(i=0;i<m;i++)
    cin>>apple[i];
  for(i=0;i<n;i++)
    cin>>orange[i];

  int ansApple=0, ansOrange=0;
  for(i=0;i<m;i++)
  {
    if(a+apple[i] >=s && a+apple[i]<=t)
        ansApple++;
  }
  cout<<"\n";
  for(i=0;i<n;i++)
  {
    if(b+orange[i]>=s && b+orange[i]<=t)
      ansOrange++;
  }

  cout<<ansApple<<"\n"<<ansOrange;
}
