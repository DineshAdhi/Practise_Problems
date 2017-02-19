#include<iostream>
using namespace std;
class graph{
public:
  int **matrix, size, *parent;

  graph(int s)
  {
    int i,j;
    size=s+1;
    parent=new int[size];
    matrix=new int*[size];
    for(i=0;i<size;i++)
    {
      matrix[i]=new int[size];
      parent[i]=0;
    }

    for(i=0; i<size;i++)
      for(j=0; j<size; j++)
      {
          matrix[i][j]=0;
      }

  }

  void addEdge(int src, int des, int weight){
    matrix[src][des]=weight;
    matrix[des][src]=weight;
    parent[des]=src;
  }

  void print()
  {
    int i,j;
    for(i=0;i<size;i++)
    {
      for(j=0;j<size;j++)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
    }
  }
};

int main()
{
  graph g(3);
  g.addEdge(1,2,1);
  g.addEdge(2,3,1);
  g.addEdge(1,3,1);
  g.print();
}
