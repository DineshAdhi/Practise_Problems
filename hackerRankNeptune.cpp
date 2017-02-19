#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class graph{
public:
  int **matrix, size;

   graph(int s)
   {
     size=s;
     matrix=new int*[size+1];
     for(int i=1;i<=size;i++)
     {
       matrix[i]=new int[size];
     }

     for(int m=1;m<=size;m++)
     {
       for(int n=1;n<=size;n++)
       {
         matrix[m][n]=0;
       }
     }
   }

  void addEdge(int src, int des, int weight)
  {
    matrix[src][des]=weight;
    matrix[des][src]=weight;
  }

  void bfs()
  {
    queue<int> a;
    int visited[size];
    for(int i=1;i<=size;i++)
    {
      visited[i]=0;
    }
    a.push(1);
    while(!a.empty())
    {
      visited[a.front()]=1;
      for(int x=1;x<=size;x++)
      {
        if(matrix[a.front()][x]!=0 && visited[x]==0)
        {
          a.push(x);
        }
      }
      cout<<a.front()<<" ";
      a.pop();
    }

    cout<<"\n";

    for(int r=1;r<=size;r++)
    {
      cout<<visited[r]<<" ";
    }
  }



void dfs(){
  int visited[size];
  for(int i=1;i<=size;i++)
  {
      visited[i]=0;
  }
  stack<int> a;
  a.push(1);
  visited[1]=1;
  cout<<1<<" ";
  while(!a.empty())
  {
    int flag=0;
    for(int s=1;s<=size;s++)
    {
      if(matrix[a.top()][s]!=0 && visited[s]==0)
      {
        flag=1;
        break;
      }
      else
        flag=0;
    }
    if(flag==1)
    {
      for(int m=1;m<=size;m++)
      {
        if(matrix[a.top()][m]!=0 && visited[m]==0)
        {
          a.push(m);
          cout<<m<<" ";
          visited[m]=1;
        }
      }
    }
    else
      a.pop();
  }

  cout<<"\n";

  for(int r=1;r<=size;r++)
  {
    cout<<visited[r]<<" ";
  }
}



};

int main()
{
  int n,m,d;
  cin>>n>>m>>d;
  graph g(n);
  while(m--)
  {
    int u,v,c;
    cin>>u>>v>>c;
    g.addEdge(u,v,c);
  }
  
}
