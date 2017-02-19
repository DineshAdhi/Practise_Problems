#include<iostream>
using namespace std;
class HashEntry
{
public:
  int key;
  int value;

  HashEntry(int key, int value)
  {
    this->key=key;
    this->value=value;
  }

  int getKey()
  {
    return key;
  }

  int getValue()
  {
    return value;
  }
};

class HashTable
{
public:
  HashEntry table[100];

  HashTable()
  {
    for(int i=0;i<100;i++)
    table[i]=NULL;
  }

  void insert(int key,int value)
  {
    int hash=key%100;
    while(table[hash]!=NULL && table[hash].getKey()!=key)
    hash=(hash+1)%100;
    table[hash]=new HashEntry(key,value);
  }

  int get(int key)
  {
    int hash=key%100;
    while(table[hash]!=NULL && table[hash].getKey()!=key)
    hash=(hash+1)%100;
    return table[hash].getvalue();
  }
};

int main()
{
  HashTable hash;
  hash.inset(1,10);
  cout<<hash.get(1);
}
