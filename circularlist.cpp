#include<iostream>
#include<time.h>
using namespace std;
class node
{
public:
  int data;
  node *next;
};
class cll
{
public:
  node *head=NULL;

  void insert(int data)
  {
    node *temp = new node();
    temp->data = data;
    temp->next = temp;

    if(head==NULL)
      head = temp;
    else
    {
      node *ptr = head;
      while(ptr->next!=head)
      {
        ptr = ptr->next;
      }
      ptr->next = temp;
      temp->next = head;
    }
  }

  void print()
  {
    node *ptr = head;

    do
    {
      cout<<ptr->data<<" ";
      ptr = ptr->next;
    }while(ptr!=head);

  }

  int operator[](int i)
  {
    node *ptr = head;
    if(i==0)
      return head->data;

    do
    {
      i--;
      ptr = ptr->next;
    }while(i>0 && ptr!=head);

    return ptr->data;
  }

  void sinsert(int data)
  {
    node *temp = new node(); temp->data = data; temp->next = temp;

    if(head == NULL)
    { head = temp; return; }

    node *tail = head;

    while(tail->next!=head)
      tail = tail->next;

    if(data < head->data)
    {
      tail->next = temp;
      temp->next = head;
      head = temp;
      return;
    }

    node *ptr = head, *follower;

    do
    {
      follower = ptr;
      ptr = ptr->next;
    }while(data > ptr->data && ptr!=head);

    follower->next = temp;
    temp ->next = ptr;
  }

};

int main()
{
  clock_t begin = clock();
  cll n;
  for(int i=792; i>=0; i--)
  {
    n.sinsert(i);
  }
  n.print();

  clock_t end = clock();

  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  cout<<"\n\n"<<time_spent<<" ";
}
