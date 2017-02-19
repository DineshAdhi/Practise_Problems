#include<iostream>
using namespace std;
int main()
{
int n; cin>>n;
while(n--)
{
int i,j,s,m,res=0;
cin>>s>>m;
for(i=1;i<=m;i++)
for(j=i;j<=m;j++)
 if(i+j <=m)
   res++;
cout<<"\n";
cout<<res;
}
}
