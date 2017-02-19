#include<string.h>
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  while(n--)
  {
    char name[50],temp;
    scanf("%s",&name);
    for(int i=0;i<=strlen(name);i++)
    {
      if(temp!=name[i])
      {
        printf("%c",name[i]);
        temp=name[i];
      }
    }
    temp=NULL;
  }
}
