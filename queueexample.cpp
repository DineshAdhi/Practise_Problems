#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node *next=NULL;
};
class queue
{
public:
  node *head=NULL;

  void insert(int data)
  {
    node *tempNode=new node();
    tempNode->data=data;

    if(head==NULL)
      head= tempNode;
    else
    {
      node *ptr= head;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=tempNode;
    }
  }

  int pop()
  {
    int res = head->data;
    head=head->next;

    return res;
  }

  void print()
  {
    node *ptr=head;
    while(ptr!=NULL)
    {
      cout<<ptr->data<<" ";
      ptr= ptr->next;
    }
  }
  
};
int main()
{
  queue l;
  for(int i=0;i<=5;i++)
    l.insert(i);

    l.print();
}
