#include<iostream>
#include<queue>
using namespace std;
class graph
{
public:
    int **matrix, *parent, size,i,j;

    graph(int s)
    {
      size = s+1;
      matrix = new int*[size];
      parent=new int[size];
      for(i=0;i<size;i++)
      {
        matrix[i]=new int[size];
        parent[i]=0;
      }

      for(i=0;i<size;i++)
        for(j=0;j<size;j++)
          matrix[i][j]=0;
    }

    void addEdge(int src, int des, int data)
    {
      matrix[src][des]=data;
      matrix[des][src]=data;
      parent[des]=src;
    }

    void removeEdge(int src, int des)
    {
      matrix[src][des]=0;
      matrix[des][src]=0;
      parent[des]=0;
    }

    int hasCycle()
    {
      int visited[size];

      for(i=0;i<size;i++)
        visited[i]=0;

      queue<int> a;
      a.push(1); visited[1]=1; parent[1]=-1;

      while(!a.empty())
      {
        for(i=1;i<size;i++)
        {
          if(matrix[a.front()][i]!=0 && visited[i]==0)
          {
            a.push(i); visited[i]=1;
          }
          else if(matrix[a.front()][i]!=0 && visited[i]==1 && parent[a.front()]!=i && parent[i]!=0 && parent[i]!=-1)
          {
            return 1;
          }
        }
          a.pop();
      }
      return 0;
    }

    void print()
    {
      for(i=1;i<size;i++)
      {
        for(j=1;j<size;j++)
        {
          cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
      }
    }
};

graph getshortestSpan(graph g)
{
  int size = g.size;
  int i,j;
  int **matrix;

  matrix=new int*[size];
  for(i=0;i<size;i++)
    matrix[i]=new int[size];

  for(i=0;i<size;i++)
    for(j=0;j<size;j++)
      matrix[i][j]=0;

  for(i=0;i<size;i++)
    for(j=0;j<size;j++)
    if(matrix[i][j]==0 && matrix[j][i]==0)
    {
      matrix[i][j]=g.matrix[i][j];
    }

    for(i=1;i<size;i++)
    {
      for(j=1;j<size;j++)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
    }




  graph shortGraph(size-1);

  for(i=1;i<size;i++)
  {
    for(j=1;j<size;j++)
    {
      if(matrix[i][j]!=0)
      {
        cout<<"Adding edge :"<<i<<","<<j<<"\n";
        shortGraph.addEdge(i,j,1);
        if(shortGraph.hasCycle())
        {
          cout<<"Removing edge : "<<i<<" "<<j<<"\n";
          shortGraph.removeEdge(i,j);
          cout<<"\n";
        }
        shortGraph.print(); cout<<"\n\n";
      }
    }
  }

  shortGraph.print();

  return shortGraph;
}

int main()
{
  graph g(6);
  g.addEdge(1,2,1);
  g.addEdge(1,3,1);
  g.addEdge(2,3,1);
  g.addEdge(2,4,1);
  g.addEdge(2,5,1);
  g.addEdge(3,5,1);
  g.addEdge(3,6,1);
  g.addEdge(4,5,1);
  g.addEdge(5,6,1);
  g.print();
  cout<<"\n\n";
  getshortestSpan(g);
}
