#include<iostream>
using namespace std;
class node
{
public:
  int data;
  node *next=NULL;
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
    }
    else
    {
      node *ptr=head;
      while(ptr->next!=NULL)
        ptr=ptr->next;

      ptr->next=new node();
      ptr->next->data=data;
    }
  }

  void circle()
  {
    node *ptr=head;
    while(ptr->next!=NULL)
      ptr=ptr->next;

    ptr->next=head;
  }

  void print()
  {
    node *ptr=head;
    while(ptr->next!=NULL)
    {
      cout<<ptr->data<<" ";
      ptr=ptr->next;
    }
  }

  void findPresident(int n)
  {
    node *ptr=head;
    for(int i=0;i<n;i++)
    {
      ptr->next=ptr->next->next;
      ptr=ptr->next;
    }
    cout<<ptr->data;
  }

};

int main()
{
  linkedList l;
  int i;
  for(i=1;i<=200;i++)
  {
    l.insert(i);
  }
  l.circle();
  l.findPresident(200);
}
