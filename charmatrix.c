#include<stdio.h>
int word[27];
int front=0;
int back=0;

void insert(int a)
{
  word[back]=a;
  back++;
}

int pop()
{
  int data = word[front];
  front++;
  return data;
}

void print()
{
  int i;
  for(i=front;i<back;i++)
    printf("%c", word[i]);
}
int main()
{
  int i,n,s=65; scanf("%d", &n);

  for(i=0;i<n;i++)
  {
    insert(s++);
  }
  for(i=0;i<n;i++)
  {
    print();
    insert(pop());
    printf("\n");
  }
  return 0;
}
