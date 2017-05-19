#include<iostream>
#include<queue>
using namespace std;
class graph
{
public:
  int **mat, size,i,j;

  graph(int s)
  {
    size = s+1;
    mat = new int*[size];
    for(i=0;i<size;i++)
      mat[i]= new int[size];

    for(i=0;i<size;i++)
    for(j=0;j<size;j++)
      mat[i][j] = 0;
  }

  void insert(int src, int des, int data)
  {
    mat[src][des] = data;
    mat[des][src] = data;
  }

  void bfs(int start)
  {
    int visited[size],shortest[size];
    for(i=0;i<size;i++)
    {
      visited[i] = 0;
      shortest[i] = 0;
    }

    queue<int> a; a.push(start);
    visited[start] = 1;

    while(!a.empty())
    {
      cout<<a.front()<<" ";

      for(i=0;i<size;i++)
      {
        if(mat[a.front()][i]!=0 && i!=start)
        {
          if(shortest[i]==0 || shortest[i] > shortest[a.front()] + mat[a.front()][i])
              shortest[i] = shortest[a.front()] + mat[a.front()][i];
        }
      }

      for(i=0;i<size;i++)
      {
        if(mat[a.front()][i] !=0 && visited[i]==0)
        {
          visited[i] = 1;
          a.push(i);
        }
      }

      a.pop();
    }

    cout<<"\n\n";

    for(i=1;i<size;i++)
    {
      cout<<i<<" "<<shortest[i]<<"\n";
    }
  }
};

int main()
{
  graph g(3);
  g.insert(1,2,20);
  g.insert(2,3,5);
  g.insert(3,1,1);
  g.bfs(1);
}
