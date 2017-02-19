#include<stdio.h>
int checkPrime(int n)
{
  int i;
  for(i=2; i<=n/2;i++)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}
int main()
{

  int flag=0,count=0,n,i;
  scanf("%d", &n);

  for(i=1;count<=n;i++)
  {
    if(checkPrime(i))
    {
      if(flag==0)
      {
        flag=1; continue;
      }
      else
      {
        flag=0;
        printf("%d ", i);
        count++;
      }
    }
  }

  return 0;
}
