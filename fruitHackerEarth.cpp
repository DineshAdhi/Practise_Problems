#include<iostream>
using namespace std;
int main()
{
  int no[3],cost[3],money,i,j,res=0;
  for(i=0;i<3;i++)
  {
    cin>>cost[i];
  }
  for(i=0;i<3;i++)
  {
    cin>>no[i];
  }
  cin>>money;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(cost[i]<cost[j])
      {
        int temp=cost[i];
        cost[i]=cost[j];
        cost[j]=temp;

        temp=no[i];
        no[i]=no[j];
        no[j]=temp;
      }
    }
  }

  i=0;
  while(money-cost[i]>0)
  {
    no[i]--;
    res++;
    money=money-cost[i];
    if(no[i]==0)
    {
        i++;
    }
  }

  cout<<res;
}
