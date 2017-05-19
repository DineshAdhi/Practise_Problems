#include<iostream>
using namespace std;
int check(char **a,int i, int j, char **b, int n)
{
  for(int l=0;l<n;l++)
  {
    for(int m=0;m<n;m++)
    {
      if(a[l+i][m+j]!=b[l][m])
      {
        cout<<"\n\nCant Find"; return 0;
      }
    }
  }

  cout<<"Found in"<<i<<" "<<j<<" "; return 1;
}
int main()
{
  char **a;
  int n,i,j; cin>>n;
  a = new char*[n];
  for(i=0;i<n;i++)
    a[i] = new char[n];

  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    cin>>a[i][j];

  int m; cin>>m;
  char **b;

  b=new char*[m];
  for(i=0;i<m;i++)
    b[i]= new char[m];


  for(i=0;i<m;i++)
  for(j=0;j<m;j++)
    cin>>b[i][j];

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        if(a[i][j] == b[0][0])
        {
          return check(a,i,j,b,m);
        }
    }
  }
}
