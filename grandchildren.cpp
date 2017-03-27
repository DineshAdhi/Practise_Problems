#include<iostream>
#include<string>
using namespace std;

string findChildren(string **a, string c, int n)
{
  int i,j;

  for(i=0;i<n;i++)
  {
    if(compare(a[1][i],c)==0)
      cout<<a[0][i]<<"\n";
  }

  return "0";
}



int main()
{
  int i,j,n; cin>>n;
  string **a;
  a=new string*[n];

  for(i=0;i<n;i++)
    a[i]=new string[2];

  for(i=0;i<n;i++)
    for(j=0;j<2;j++)
      cin>>a[i][j];

  string s; cin>>s;

  findChildren(a,s,n);
}
