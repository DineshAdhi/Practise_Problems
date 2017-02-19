#include<iostream>
using namespace std;
class GraphNode
{
public:
  int data;
  GraphNode *next;
};
class GraphList
{
public:
  GraphNode *head;
};
class Graph
{
private:
  int v;
  GraphList *array;
public:
  Graph(int v)
  {
    this->v=v;
    array=new GraphList[v];
    for(int i=0;i<v;i++)
    array[i].head = NULL;
  }

  void addEdge(int src, int des)
  {
    if(array[src].head==NULL)
    {
      array[src].head=new GraphNode();
      array[src].head->data=des;
      array[src].head->next=NULL;
    }
    else
    {
      GraphNode *ptr=array[src].head;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      };
      ptr->next=new GraphNode();
      ptr->next->data=des;
      ptr->next->next=NULL;
    }

    if(array[des].head==NULL)
    {
      array[des].head=new GraphNode();
      array[des].head->data=src;
      array[des].head->next=NULL;
    }
    else
    {
      GraphNode *ptr=array[src].head;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=new GraphNode();
      ptr->next->data=src;
      ptr->next->next=NULL;
    }
  }

  void printGraph()
  {
    for(int i=0;i<v;i++)
    {
      if(array[i].head!=NULL)
      {
        cout<<i<<" "<<"->";
        GraphNode *ptr=array[i].head;
        while(ptr!=NULL)
        {
          cout<<ptr->data<<"->";
          ptr=ptr->next;
        }
      }
      cout<<"\n";
    }
  }
};
int main()
{
  Graph g(20);
  g.addEdge(1,0);
  g.addEdge(1,4);
  g.addEdge(4,3);
  g.printGraph();
}
