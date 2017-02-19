#include<iostream>
using namespace std;
class linkedList{
  public :
  int data;
  linkedList *next=NULL;
  linkedList(int d)
  {
    data=d;
  }
  linkedList()
  {

  }
};
void insert(linkedList *head,int data,int pos)
{
  while(pos)
  {
    if(head->next!=NULL)
    {
      head=head->next;
      pos--;
    }
    else
    {
      cout<<"\nIllegal Positioning of data...\n";
      return ;
    }
  }
  linkedList *insList=new linkedList;
  insList->data=data;
  insList->next=head->next;
  head->next=insList;
}
void insert (linkedList *head,int data)
{
  if(head==NULL)
  {
    head->data=data;
    head->next=new linkedList;
  }
  else
  {
    while(head->next!=NULL)
    {
      head=head->next;
    }
    head->data=data;
    head->next=new linkedList;
  }
}
void printList(linkedList *head)
{
  while(head->next!=NULL)
  {
    cout<<head->data<<"\n";
    head=head->next;
  }
}

void deleteNode(linkedList *head,int pos)
{
  for(int i=1;i<pos-1;i++)
  {
    if(head->next==NULL)
    {
      cout<<"Illegal";
      return;
    }
    else
    {
      head=head->next;
    }
  }
  head->next=head->next->next;
}


int main()
{
  int i;
   linkedList l;
  for(i=1;i<=20;i++)
  {
    insert(&l,i);
  }
  deleteNode(&l,i);
   printList(&l);
}
