#include<iostream>
using namespace std;
class node
{
public:
  int data; int key; node *next;
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
      node *temp=head;
      while(temp->next!=NULL)
      {
        temp=temp->next;
      }
      temp->next=new node();
      temp->next->data=data;
      temp->next->next=NULL;
    }
  }

  void print()
  {
    node *temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
  }

  void printReverse(node *ptr)
  {
    if(ptr==NULL)
    return;
    printReverse(ptr->next);
    cout<<ptr->data<<" ";
  }

  void reversePrint()
  {
    printReverse(head);
  }
};
int main()
{
  linkedList ll;
  for(int i=0;i<10;i++)
  {
    ll.insert(i);
  }
  ll.print();
  cout<<"\n";
  ll.reversePrint();
}
