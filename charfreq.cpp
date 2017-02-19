#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a; char b; int j,temp,n,flag=0;
  cin>>a>>b>>n;

  for(int i=a.size()-1; i>=0; i--)
  {
    temp=i;
    for(int j=0; j<n; j++)
    {
      if(a[temp]!=b)
        flag=1;
      else
      {
        flag=0;
      }

        temp--;
    }
    cout<<"\n";

    if(flag==1){
      cout<<temp+1;
      return 0;
    }
  }
}
