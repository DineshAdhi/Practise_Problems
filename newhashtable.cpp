#include<iostream>
using namespace std;
class hashNode
{
public:
  int data;
  int key;
};
class hashTable
{
public:
  int size=100;
  hashNode nodes[100];

  void insert(int key,int data)
  {
    int loc=(size%key);
    while(nodes[loc].key!=NULL)
    {
      loc++;
    }
    nodes[loc].data=data;
    nodes[loc].key=key;
  }

  void get(int key)
  {
    int loc=size%key;
    while(nodes[loc].key!=key)
    {
      loc++;
    }
    cout<<nodes[loc].data;
  }
};

int main()
{
  hashTable a;
  a.insert(10,5);
  a.get(10);
  a.insert(25,3);
  a.get(25);
}
