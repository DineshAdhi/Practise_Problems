#include "iostream"
using namespace std;
int main()
{
  long long n,maxWeight,i,temp=0,j;
  double *v,*w,*r;
  cin>>n;
  cin>>maxWeight;
  v=new double[n];
  w=new double[n];
  r=new double[n];
  for(i=0;i<n;i++)
  {
    cin>>v[i];
    cin>>w[i];
    r[i]=v[i]/w[i];
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(r[i]<r[j])
      {
        temp=w[i];
        w[i]=w[j];
        w[j]=temp;

        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
      }
    }
  }

long long presentWeight=0,remainingWeight=0;
 double presentValue=0;

for(int iter=0;iter<n;iter++)
{
  if(presentWeight+w[iter]<maxWeight)
  {
    presentWeight=presentWeight+w[iter];
    presentValue=presentValue+v[iter];
  }
  else
  {
    remainingWeight=maxWeight-presentWeight;
    presentValue+=v[iter]*(remainingWeight/w[iter]);
    break;
  }
}
  cout<<presentValue;
}
