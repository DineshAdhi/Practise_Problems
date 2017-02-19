#include<iostream>
#include<stack>
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

  void uni(int a , int b)
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
  int **matrix, size,i,j, *parent;

  graph(int s){
    size=s+1;
    matrix=new int*[size];
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

  void insert(int des, int src, int data){
    matrix[des][src]=data;
    matrix[src][des]=data;
    parent[src]=des;
  }

  int detectCycle2()
  {
    int visited[size];
    for(i=0;i<size;i++)
      visited[i]=0;

    queue<int> a; a.push(1); visited[1]=1;
    parent[1]=-1;

    while(!a.empty())
    {
      for(i=1;i<size;i++)
      {
        if(matrix[a.front()][i]!=0 && visited[i]==0)
        {
          visited[i]=1; a.push(i);
        }
        else if(visited[i]==1)
        {
          if(matrix[a.front()][i]!=0 && parent[a.front()]!=i && parent[a.front()]!=-1)
          {
            cout<<"There is a cycle in this graph"<<a.front()<<"  "<<i<<"\n\n";
            cout<<parent[a.front()]<<"\n\n";
            return 1;
          }
        }
      }
      a.pop();
    }

    cout<<"No cycle found here\n\n";
    return 0;

  }

int detectCycle()
{
  int visited[size],onstack[size];
  for ( i = 0; i < size; i++) {
      visited[i]=0; onstack[i]=0;
  }

  stack<int> a; a.push(1); visited[1]=1; onstack[1]=1;

  while(!a.empty())
  {
    int flag=0;

    for ( i = 0; i < size; i++) {

        if(matrix[a.top()][i]!=0)
        {
          if(onstack[i]==1)
          {
            cout<<"Cycle is detected";
            return 1;
          }
           else if(visited[i]==0)
          {
            flag=1; break;
          }
        }
        else flag=0;
      }

        if(flag==1)
        {
          for(i=0;i<size;i++)
          {
            if(matrix[a.top()][i]!=0 && visited[i]==0)
            {
              cout<<i<<" ";
              a.push(i); onstack[i]=1; visited[i]=1;
            }
          }
        }
        else if(flag==0)
        {
          onstack[a.top()]=0;
          a.pop();
        }
    }
    cout<<"There is no cycle";
    return 0;
  }


  void print()
  {
    for(i=1;i<size;i++)
    {
      for(j=1;j<size;j++)
        cout<<matrix[i][j]<<" ";

      cout<<"\n";
    }
  }
};

int main()
{
  graph g(10);
  g.detectCycle2();
}
