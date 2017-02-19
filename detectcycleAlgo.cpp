#include<iostream>
#include<stack>
using namespace std;
class graph
{
public:
  int **matrix, size, i, j;

  graph(int s)
  {
    size=s+1;
    matrix= new int*[size];
    for(i=0; i<size;i++)
      matrix[i]=new int[size];

    for(i=0;i<size;i++)
      for(j=0;j<size;j++)
      {
        matrix[i][j]=0;
      }
  }

  void insert(int src, int des, int data)
  {
    matrix[src][des]=data;
  }

  void dfs()
  {
    stack<int> a;
    a.push(1);

    int visited[size];

    for(i=0;i<size;i++)
      visited[i]=0;

    visited[1]=1;

    while(!a.empty())
    {
      int flag=0;

      for(i=1;i<size;i++)
      {
        if(matrix[a.top()][i]!=0 && visited[i]==0)
          {flag=1; break;}
        else
          flag=0;
      }

      if(flag==1)
      {
        for(i=1;i<size;i++)
        {
          if(matrix[a.top()][i]!=0 && visited[i]==0)
          {
            visited[i]=1;
            a.push(i);
            cout<<i<<" ";
          }
        }
      }
      else
        a.pop();
    }
  }


int detectCycle()
{
  stack<int> a;
  a.push(1);

  int visited[size];

  for(i=0;i<size;i++)
    visited[i]=0;

  visited[1]=1;

  while(!a.empty())
  {
    int flag=0;
    visited[a.top()]=1;

    for(i=1;i<size;i++)
    {
      if(matrix[a.top()][i]!=0)
      {
            if(visited[i]==0)
            {
              flag=1; break;
            }
            else if(visited[i]==1)
            {
              cout<<"There is a cycle"<<"  "<<a.top()<<"  "<<i<<"\n";
              return 1;
            }
      }
      else
        flag=0;
    }

    if(flag==1)
    {
      for(i=1;i<size;i++)
      {
        if(matrix[a.top()][i]!=0 && visited[i]==0)
        {
          a.push(i);
        }
      }
    }
    else
      a.pop();
  }

  cout<<"No cycle exists";
  return 0;
}


  void print()
  {
    for(i=0;i<size;i++)
    {
      for(j=0;j<size;j++)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
    }
    cout<<"\n\n\n";
  }
};

int main()
{
  graph g(3);
  g.insert(1,2,4);
  g.insert(2,3,5);
  g.print();
  g.detectCycle();
}
