#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node *next;
};

class linkdedList
{
  node *head=NULL;
public:
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

  void makealoop(int n)
  {
    node *ptr=head;
    node *ptr1=head;
    for(int i=0;i<4;i++)
    {
      ptr=ptr->next;
    }
    while(ptr1->next!=NULL)
    {
      ptr1=ptr1->next;
    }
    ptr1->next=ptr;
  }

  void findloop()
  {
    node *ptr=head;
    node *ptr1=head;
    while(ptr!=NULL && ptr1!=NULL)
    {
      ptr=ptr->next;
      ptr1=ptr1->next->next;
      if(ptr==ptr1)
      {
        cout<<"Loop exists\n";
        return ;
      }
    }

    cout<<"Loop does not exist";
  }

  void findStartingNodeofLoop()
  {
    node *ptr=head;
    node *ptr1=head;
    while(ptr!=NULL && ptr1!=NULL)
    {
      ptr=ptr->next;
      ptr1=ptr1->next->next;
      if(ptr==ptr1)
      {
        ptr=head;
        break;
      }
    }
    while(ptr!=ptr1)
    {
      ptr=ptr->next;
      ptr1=ptr1->next;
    }

    cout<<"Loop start:"<<ptr->data;
  }

};

int main()
{
  linkdedList l;
  for(int i=1;i<=10;i++)
  {
    l.insert(i);
  }
  l.makealoop(5);
  l.findloop();
  l.findStartingNodeofLoop();

}
