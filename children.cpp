#include<iostream>
using namespace std;
int main()
{
  int n,i,j,ngroups;
  cin>>n;
  float *a,temp;
  a=new float[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }

  for(i=0;i<n;i++)
  {
    cout<<a[i]<<' ';
  }

  for(i=0;i<n;i++)
  {
    float start=a[i];
    static int s=1;
    while(start-a[s]<1)
    {
      s=s+1;
    }
    if(s!=1)
    {
      ngroups++;
      i=s+1;
    }
  }

  cout<<"\n"<<ngroups;

}
