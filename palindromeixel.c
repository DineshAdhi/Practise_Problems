#include<stdio.h>
#include<string.h>
int palindrome(char *a, int x, int y)
{
  int i;
  for(i=x;i<y;i++)
  {
    if(a[i]!=a[y-i-1+x])
    {
        printf("Mismatch %c, %c\n", a[i], a[y-i-1]);
        return 0;
    }
  }
  return 1;
}
int main()
{
  char a[100]; int k;
  scanf("%s", a);
  scanf("%d", &k);
  int len = strlen(a);
  int x = 0, y = len/k;
  while(1)
  {
    printf("%d , %d \n", x, y);
    if(!palindrome(a, x, y))
    {
        printf("No"); return 0;
    }
    x = y;
    y = y + (len/k);
    if(y > strlen(a))
      break;
  }

  printf("YES");
  return 0;
}
