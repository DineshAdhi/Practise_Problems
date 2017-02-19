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
      while(ptr!=NULL)
      {
        ptr=ptr->next;
      }
      ptr=new node();
      ptr->data=data;
      ptr->next=NULL;
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
  };

  int main()
  {
    linkedList a;
    a.insert(10);
    a.insert(2343);
    cout<<a.head->data;
  }
