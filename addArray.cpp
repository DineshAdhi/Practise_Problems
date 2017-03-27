#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n,m,i,j;
  cin>>n;
  int a[n];

  for(i=0;i<n;i++)
    cin>>a[i];

  cin>>m;
  int b[m];
  for(i=0;i<m;i++)
    cin>>b[i];


  vector<int> c;


  int rem = 0;

  do
  {
    int sum=0;

    if(n>0)
      sum += a[--n];

    if(m>0)
      sum += b[--m];

    int storeSum = sum%10;


    if((storeSum+rem)<10)
    {
      c.push_back(storeSum + rem);
        rem = sum/10;
    }
    else
    {
      c.push_back((storeSum+rem)%10);
      rem = sum/10 + (storeSum+rem)/10;
    }


  }while(n>0 || m>0);

  if(rem>0)
    c.push_back(rem);

  cout<<"\n";

  for(i=c.size()-1;i>=0;i--)
    cout<<c[i]<<" ";
}
