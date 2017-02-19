#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node *next;
};
class linkedList
{
public:
  node *head=NULL;

  void insert(int data)
  {
    if(head==NULL)
    {
      head=new node();
      head->data=data;
      head->next=NULL;
    }
    else
    {
      node *ptr=head;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=new node();
      ptr->next->data=data;
      ptr->next->next=NULL;
    }
  }

  void insert(node *ptrNode)
  {
    node *ptr=head;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=ptrNode;
  }

  void print()
  {
    node *ptr=head;
    while(ptr!=NULL)
    {
      cout<<&ptr->next<<" ";
      ptr=ptr->next;
    }
  }
};
int main()
{
  linkedList a,b;
  a.insert(11);
  a.insert(12);
  a.insert(13);
  a.insert(4);
  a.insert(5);
  a.insert(6);

  b.insert(10);
  b.insert(20);
  b.insert(30);

  b.insert(a.head->next->next->next);

  a.print(); cout<<"\n";
  b.print(); cout<<"\n\n";

  cout<<a.head;

}
