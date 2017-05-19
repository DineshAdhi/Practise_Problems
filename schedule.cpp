#include<iostream>
#include<map>
using namespace std;

void finishWork(int *a, int *b)
{
  int i;
  for(i=0;i<5;i++)
  {
    if(a[i]<=0)
      continue;
    else
    {
      a[i] = a[i] - b[i];
      return;
    }
  }
}

int calcRemaining(int *a, int *b)
{
  int count = 0,i;
  for(i=0;i<5;i++)
  {
    if(a[i] > 0)
      count++;
  }
  return count;
}

int main()
{
  int a[5],b[5],i;

  for(i=0;i<5;i++)
    cin>>a[i];

  for(i=0;i<5;i++)
    cin>>b[i];

  int res = 1;

  while(true)
  {
    int x = calcRemaining(a,b);
    if(x!=0)
    {
      res = res * x;
    }
    else
    {
      break;
    }
    finishWork(a,b);
  }

  cout<<"\n";
  cout<<res;

}
