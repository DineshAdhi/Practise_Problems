#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n; scanf("%d", &n);

  int *a,i;

  a= (int *)malloc(sizeof(int) * n);

  a[0]=0; a[1]=1;


  for(i=0;i<n;i++)
  {
    int j; int *b; b=(int *)malloc(sizeof(int) * n);
    b[0]=0;
    for(j=0;j<i+1;j++)
    {
      b[j+1]=a[j]+a[j+1];
      printf("%d ", a[j]+a[j+1]);
    }
    printf("\n");
    b[j]=0;

    for(int s=0;s<j;s++)
    {
      a[s] = b[s];
    }
  }
}
