#include<iostream>
using namespace std;
struct node
{
  int data;
  int pri;
  struct node *next=NULL;
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
    node temp;
    temp.data= data;
    temp.pri=pri;
    temp.next=new node;
    if(front==NULL)
    {
      front=&temp;
    }
    else
    {
      node *q;
      q=front;
      while(q->next!=NULL)
      {
        q=q->next;
      }
      q=&temp;
    }
  }

  void print()
  {
    node *t;
    t=front;
    while(t->next!=NULL)
    {
      cout<<t->data<<" "<<t->pri<<" "<<t->next<<"\n";
      t=t->next;
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
  q.insert(1,100);
  q.insert(2,100);
  q.insert(3,198);
  q.print();
}
