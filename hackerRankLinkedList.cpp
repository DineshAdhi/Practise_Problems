#include<iostream>
using namespace std;
class node{
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

  void print()
  {
    node *ptr=head;
    while(ptr!=NULL)
    {
      cout<<ptr->data<<" ";
      ptr=ptr->next;
    }
  }

  void printReverse(node *ptr)
  {
    if(ptr!=NULL)
      printReverse(ptr->next);
    cout<<ptr->data<<" ";
  }
};
int main()
{
  linkedList l;
  l.insert(1);
  l.insert(2);
  l.printReverse(l.head);

}
