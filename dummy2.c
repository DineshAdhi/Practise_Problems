#include<stdio.h>
#include<string.h>
int main()
{
char a[100]; scanf("%s", a);
int map[26],i;

for(i=0;i<26;i++)
  map[i] = 0;

for(i=0;i<strlen(a);i++)
{
  map[a[i]-97] = 1;
}
int count = 0;
for(i=0;i<strlen(a);i++)
{
  if(map[a[i]-97] == 1)
    count++;
}

printf("%d" , count);
}
