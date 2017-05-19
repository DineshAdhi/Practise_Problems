#include<iostream>
using namespace std;

bool check(char **a,string s, int len, int i, int j,int n)
{
  if(i>=n || j>=n || j<0 || i<0)
    return 0;

  if(s[len]=='\0')
    return 1;

  if(s[len]!=a[i][j])
    return 0;

  return(check(a,s,len+1,i,j+1,n) || check(a,s,len+1,i+1, j,n) || check(a,s,len+1,i,j-1,n) || check(a,s,len+1,i-1,j,n));
}

int main()
{
  int n,i,j; cin>>n;

  char **a; a = new char*[n];

  for(i=0;i<n;i++)
    a[i]=new char[n];

  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    cin>>a[i][j];

  string s; cin>>s;

  cout<<"\n\n";

  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
      if(a[i][j]==s[0])
      {
        if(check(a,s,0,i,j,n))
        {
          cout<<"Found at"<<i<<" "<<j<<" ";
          return 0;
        }
      }
    }
}
