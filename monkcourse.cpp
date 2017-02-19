#include<iostream>
using namespace std;
int main()
{
  int i,j,k,C,P,N;
  cin>>C>>P>>N;
  int siq[C],fiq[C];
  for(i=1;i<=C;i++)
  {
    siq[i]=0;
    fiq[i]=0;
  }

  for(i=1;i<=N;i++)
  {
    cin>>siq[i];
  }

  for(i=1;i<=N;i++)
  {
    cin>>fiq[i];
  }

  for(i=1;i<=P;i++)
  {
    int minIndex=1,min=siq[i];
    for(j=1;j<=C;j++)
    {
      if(siq[j]<min)
      {
        min=siq[j];
        minIndex=j;
      }
      else if(siq[j]==min)
      {
        minIndex=j;
      }
    }

    cout<<"\t\t\t";

    for(k=1;k<=C;k++)
    {
          cout<<siq[k]<<" ";
    }


    cout<<"\n"<<minIndex<<"\n";
    siq[minIndex]+=fiq[i];

  }


}
