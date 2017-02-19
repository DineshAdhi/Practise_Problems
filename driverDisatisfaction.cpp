#include<iostream>
#include<queue>
using namespace std;
class edges
{
public:
  int src, des, weight;
};
class graph
{
public:
  int **matrix,size,*parent;
  graph(int a)
  {
    int i,j;
    size=a+1;
    parent=new int[a+1];
    matrix=new int*[a+1];
    for(i=1;i<a+1;i++)
    {
      matrix[i]=new int[a];
      parent[i]=0;
    }

    for(i=1;i<a+1;i++)
      for(j=1;j<a+1;j++)
        matrix[i][j]=0;
  }

  void addEdge(int des, int src, int weight)
  {
    parent[src]=des;
    matrix[des][src]=weight;
    matrix[src][des]=weight;
  }

  void removeEdge(int des, int src)
  {
    parent[src]=0;
    matrix[des][src]=0;
    matrix[src][des]=0;
  }

  void print()
  {
    for(int i=1;i<size;i++)
    {
      for(int j=1;j<size;j++)
        cout<<matrix[i][j]<<" ";

      cout<<"\n";
    }
  }

  int detectCyle()
  {
    int i,visited[size];
    for(i=1;i<=size;i++)
      visited[i]=0;
    queue<int> a;
    a.push(1);
    while(!a.empty())
    {
      visited[a.front()]=1;
      for(i=1;i<=size;i++)
      {
        if(matrix[a.front()][i]!=0)
        {
          if(visited[i]==1 && parent[a.front()]!=i && parent[a.front()]!=0)
          {
            return 0;
          }
          else if(visited[i]==0)
            a.push(i);
        }
      }
      if(!a.empty())
       return 1;
      a.pop();
    }
    return 1;
  }

};

void swap(int *a, int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

graph minSpanTree(int *weight, int *src, int *des, int s, int n)
{
  int i,j;
  graph g(n+1);

  for(i=0;i<s;i++)
  {
    for(j=i+1; j<s; j++)
    {
      if(weight[j] < weight[i])
      {
        swap(&weight[i],&weight[j]);
        swap(&src[i],&src[j]);
        swap(&des[i],&des[j]);
      }
    }
  }

  for(i=0;i<s;i++)
  {
    cout<<weight[i]<<"  "<<src[i]<<"  "<<des[i]<<"  ";
    cout<<"\n";
  }

  for(i=0;i<s;i++)
  {
    g.addEdge(src[i],des[i],weight[i]);
    cout<<g.detectCyle()<<" ";
    if(!g.detectCyle())
    {
      g.removeEdge(src[i],des[i]);
    }
  }
  g.print();
  return g;

}

int main()
{
  int *weight,*src,*des;
  int m,n; cin>>n>>m;
  weight=new int[m]; src=new int[m]; des=new int[m];
  for(int i=0;i<m;i++)
  {
    cin>>weight[i]>>src[i]>>des[i];
  }
  cout<<"\n";
  graph minGrpah(n+1);
  minGrpah=minSpanTree(weight,src,des,m,n);
}
