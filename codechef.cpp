#include<iostream>
using namespace std;
class queue
{
public:
  int data;
  queue *next=NULL;
};

void enqeue(int data, queue *head)
{
  if(head->next==NULL)
  {
    head->data=data;
    head->next=new queue;
    return;
  }
  else
  {
    while(head->next!=NULL)
    {
      head=head->next;
    }
    head->data=data;
    head->next=new queue;
  }
}

void dequeue(queue *head)
{
  queue newQueue;
  newQueue.data=head->next->data;
  newQueue.next=head->next->next;

  *head=newQueue;
}

void print(queue *head)
{
  while(head->next!=NULL)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
}
int main()
{
  queue q;
  for(int i=1;i<=10;i++)
  {
    enqeue(i,&q);
  }
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  print(&q);

}
