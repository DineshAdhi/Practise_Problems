#include<iostream>
#define HASH_SIZE 100
using namespace std;
class hashNode
{
public:
  int key;
  int data;

  hashNode()
  {

  }
};

class HashTable
{
public:
  hashNode **node;

  HashTable()
  {
    for(int i=0;i<HASH_SIZE;i++)
    node[i]=NULL;
  }

  void insert(int key,int data)
  {
    int hash=key%HASH_SIZE;
    while(node[hash]!=NULL && node[hash]->key!=key)
    {
      hash=(hash+1)%HASH_SIZE;
    }

    node[hash]=(hashNode*)new hashNode();
    node[hash]->data=data;
    node[hash]->key=key;

  }

  int get(int key)
  {
    int hash=key%HASH_SIZE;
    while(node[hash]!=NULL && node[hash]->key!=key)
    {
      hash=(hash+1)%HASH_SIZE;
    }

    if(node[hash]!=NULL)
    {
        cout<<node[hash]->data<<"\n";
    }
    else
    {
      cout<<"No data found for the correspoding key\n";
    }
}

};
int main()
{
  HashTable table;
  for(int i=0;i<1000;i++)
  {
    table.insert(i,20);
  }
  for(int j=0;j<100;j++)
  {
    table.get(j);
  }

}
