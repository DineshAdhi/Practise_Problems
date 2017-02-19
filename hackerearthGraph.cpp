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

void findShortestPath(int z)
{
  int i,j,visited[size],shortest[size],path[size],longest[size];
  for(i=1;i<=size;i++)
  {
    visited[i]=0; shortest[i]=0; path[i]=0; longest[i]=0;
  }
  queue<int> a;
  a.push(z);
  while(!a.empty())
  {
    visited[a.front()]=1;
    for(i=1;i<=size;i++)
    {
      if(matrix[a.front()][i]!=0 && visited[i]==0)
      {
        if(shortest[i]==0 || shortest[i] > shortest[a.front()]+matrix[a.front()][i])
        {
          shortest[i]=shortest[a.front()]+matrix[a.front()][i];
          path[i]=a.front();
        }

        if(longest[i]==0 || longest[i] < longest[a.front()]+matrix[a.front()][i])
        {
          longest[i]=longest[a.front()]+matrix[a.front()][i];
          path[i]=a.front();
        }
        a.push(i);
      }
    }
    a.pop();
  }
  cout<<"\n";
  for(i=1;i<=size;i++)
  {
    cout<<i <<" : "<<shortest[i]<<" ";
    int k=path[i];
    stack<int> pathStack;
    while(k!=0)
    {
      pathStack.push(k);
      k=path[k];
    }
    while(!pathStack.empty())
    {
      cout<<pathStack.top()<<"->";
      pathStack.pop();
    }
    cout<<i;
    cout<<"\n";
  }
  cout<<"\n\n";
  for(i=1;i<=size;i++)
  {
    cout<<i <<" : "<<longest[i]<<" ";
    cout<<"\n";
  }
}

void hackerRankShortestPath(int s)
{
  int i,j,visited[size],shortest[size];
  queue<int> a;
  for(i=1;i<=size;i++)
  {
    visited[i]=0; shortest[i]=0;
  }
  a.push(s);
  while(!a.empty())
  {
    visited[a.front()]=1;
    for(i=1;i<=size;i++)
    {
      if(matrix[a.front()][i]!=0 && visited[i]==0)
      {
        if(shortest[i]==0 || shortest[i] > matrix[a.front()][i]+shortest[a.front()])
        {
          shortest[i]=matrix[a.front()][i]+shortest[a.front()];
        }
        a.push(i);
      }
    }
      a.pop();
  }

  for(i=1;i<=size;i++)
  {
    if(i==s)
    continue;
    if(shortest[i]==0)
    cout<<"-1";
    else
    cout<<shortest[i]<<" ";
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


  void print()
  {
    for(int i=1;i<=size;i++)
    {
      for(int j=1;j<=size;j++)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
    }
  }
};

int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int n,m;
    cin>>n>>m;
    graph g(n);
    while(m--)
    {
      int x,y,r;
      cin>>x>>y>>r;
      g.addEdge(x,y,r);
    }
    int s;
    cin>>s;
    g.hackerRankShortestPath(s);
    cout<<"\n";
  }
}
