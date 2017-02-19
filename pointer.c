#include<stdio.h>
int main()
{
  float *ptr;
  int n;
  n=320;
  ptr=&n;
  printf("Address if n :%d\n",&n);
  printf("Value of n : %d\n",n);
  printf("Address of n in ptr : %d\n",ptr);
  printf("Value of n pointed by the pointer: %d\n",*ptr);
  printf("Size of Float: %d \n",sizeof(float));
  printf("Size of int: %d \n",sizeof(int));
}
