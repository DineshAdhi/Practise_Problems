#include<stdio.h>
int main()
{
  int n,i,j,a=0,b=1;

  scanf("%d", &n);
  for(i=n;i>=1;i--)
  {
    printf("\n");
    a=b;
    for(j=1;j<=i;j++)
    {
      printf("%d ",a);
      a=a+2;
    }
    b=b+2;
  }

  printf("\n\n");
}
