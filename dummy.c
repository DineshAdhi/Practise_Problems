#include<stdio.h>

int main()
{
  // char cipher[50], key[50];
  // scanf("%s %s", cipher, key);
  //
  // int keyLength=0, i=0;
  //
  // while(key[i]!='\0')
  // {
  //   keyLength++; i++;
  // }
  //
  // i=0;
  //
  // while(cipher[i]!='\0')
  // {
  //   printf(" %c(%d), %c(%d)", cipher[i],cipher[i],key[i % (keyLength)],key[i % (keyLength)]);
  //   int temp = ((cipher[i] -  64) - (key[i % (keyLength)] - 64 )) + 64 ;
  //
  //   printf(" %c\n", temp);
  //
  //   i++;
  // }

  char a = 'B', b='A';

  printf("%c", ((a-64)-(b-64)) + 65);
}
