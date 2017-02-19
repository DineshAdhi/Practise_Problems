#include<iostream>
#include<queue>
#include<map>
using namespace std;
class Disjointset
{
public:
  map<int,int> m;

  void insert(int a)
  {
    m.insert(pair<int,int>(a,a));
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
      return parent[a];
  }
};

class graph
{
public:
  int **matrix, size,i,j;

  graph(int s)
  {
    size= s+1;
    matrix = new int*[size];
    for(i=0;i<size;i++)
      matrix[i]=new int[size];

    for(i=0;i<size;i++)
      for(j=0;j<size;j++)
        matrix[i][j]=0;
  }

  void addEdge(int des, int src, int data)
  {
    matrix[des][src]=data;
    matrix[src][des]=data;
  }

  graph minSpanGraph()
  {
    graph minGraph(size-1);
    Disjointset ds;
    int visited[size];

    for(i=0;i<size;i++)
    {
      visited[i]=0;
      ds.insert(i);
    }

    queue<int> a; a.push(1); visited[1]=1;

    while(!a.empty())
    {
      for(i=0;i<size;i++)
        if(matrix[a.front()][i]!=0 && visited[i]==0)
        {
          a.push(i); visited[i]=1;
          if(ds.find(a.front())!= ds.find(i))
            minGraph.addEdge(a.front(),i, matrix[a.front()][i]);
        }

        a.pop();
    }
  }
};

int main()
{
  int n,m; cin>>n>>m;
  graph g(n);
}
