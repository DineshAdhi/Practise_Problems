#include<iostream>
using namespace std;
class node
{
public:
  int data;
  int pri;
  node *next=NULL;

  node()
  {

  }
};
class pq
{
public:
  node *front;
  pq()
  {
      front=NULL;
  }

  void insert(int data, int pri)
  {
    node *temp;
    temp=new node();
    temp->data=data;
    temp->pri=pri;
    if(front==NULL || temp->pri > front->pri)
    {
      temp->next=front;
      front=temp;
    }
    else
    {
      node *p;
      p=front;
      while(p->next!=NULL && p->next->pri > temp->pri)
      {
        p=p->next;
      }
      temp->next=p->next;
      p->next=temp;
    }
  }

  void print()
  {
    node *p;
    p=front;
    while(p!=NULL)
    {
      cout<<p->data<<" "<<p->pri<<"\n";
      p=p->next;
    }
  }

  void pop()
  {
    if(front!=NULL)
    {
      front=front->next;
    }
  }
};

int main()
{
  pq q;
  for(int i=1;i<=10;i++)
  {
    q.insert(i+10,11-i);
  }
  q.print();
}
