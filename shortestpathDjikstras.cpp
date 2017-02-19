#include<iostream>
#include<queue>
using namespace std;
class graph
{
public:
  int **matrix,i,j,size;

  graph(int s)
  {
    size =s+1;
    matrix = new int*[size];
    for(i=0;i<size;i++)
      matrix[i]=new int[size];

    for(i=0;i<size;i++)
    for(j=0;j<size;j++)
     matrix[i][j]=0;
  }

  void insert(int a, int b, int w)
  {
    matrix[a][b]=w;
    matrix[b][a]=w;
  }

  void print()
  {
    for(i=0;i<size;i++)
    {
      for(j=0;j<size;j++)
        cout<<matrix[i][j]<<" ";

      cout<<"\n";
    }
  }

  void bfs()
  {
    queue<int> a; int visited[size];

    for(i=0;i<size;i++)
      visited[i]=0;

    a.push(1); visited[1]=1;

    while(!a.empty())
    {
      for(i=1;i<size;i++)
      {
        if(matrix[a.front()][i]!=0 && visited[i]==0)
        {
         visited[i]=1;
         a.push(i);
        }
      }
      cout<<a.front()<<" ";
      a.pop();
    }
  }

  void findShortestPath()
  {
    queue<int> a; int visited[size], shortest[size];

    for(i=0;i<size;i++)
    { visited[i]=0; shortest[i]=0; }

    a.push(1); visited[1]=1;

    while(!a.empty())
    {
      for(i=0;i<size;i++)
      {
        if(matrix[a.front()]!=0 && visited[i]==0)
        {
          visited[i]=1; a.push(i);

          if(shortest[i]==0 || shortest[i] > shortest[a.front()]+matrix[a.front()][i])
            shortest[i]= shortest[a.front()]+matrix[a.front()][i];
        }
      }

      a.pop();
    }

    for(i=0;i<size;i++)
      cout<<i<<" : "<<shortest[i]<<"\n";
  }
};

int main()
{
  graph g(4);
  g.insert(1,2,4);
  g.insert(2,3,6);
  g.insert(1,3,2);
  g.findShortestPath();
}
