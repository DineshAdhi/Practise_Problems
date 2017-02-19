#include<iostream>
#include<queue>
#include<map>
using namespace std;
class Disjointset
{
public:
  map<int, int> m;

  void insert(int i)
  {
    m.insert(pair<int,int>(i,i));
  }

  void uni(int a, int b)
  {
    m[b]=a;
  }

  int find(int a)
  {
    if(m[a]==a)
      return a;
    else
      return find(m[a]);
  }
};
class graph
{
public:
  int **matrix, size,i,j;

  graph(int s)
  {
    size= s+1;
    matrix=new int*[size];
    for(i=0;i<size;i++)
      matrix[i]=new int[size];

    for(i=0;i<size;i++)
      for(j=0;j<size;j++)
        matrix[i][j]=0;
  }

  void addEdge(int des, int src)
  {
    matrix[des][src]=1;
    matrix[src][des]=1;
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

  graph getMinSpanTree()
  {
    int visited[size];

    Disjointset ds;
    graph minSpanGraph(size-1);

    for(i=0;i<size;i++)
    {
      visited[i]=0;
      ds.insert(i);
    }

    queue<int> a; a.push(1); visited[1]=1;

    while(!a.empty())
    {
      for(i=0;i<size;i++)
      {
        if(matrix[a.front()][i]!=0 && visited[i]==0)
        {
          visited[i]=1; a.push(i);
          if(ds.find(a.front())!= ds.find(i))
          {
            minSpanGraph.addEdge(a.front(),i);
          }
        }
      }
      a.pop();
    }

    return minSpanGraph;
  }
};

int main()
{
  graph g(7);
  g.addEdge(1,2);
  g.addEdge(2,4);
  g.addEdge(2,3);
  g.addEdge(1,3);
  g.addEdge(3,5);
  g.addEdge(4,5);
  g.addEdge(1,7);
  g.addEdge(7,6);
  g.addEdge(6,5);

  graph minGraph = g.getMinSpanTree();

  g.print();

  cout<<"\n\n";

  minGraph.print();

}
