#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;

class set
{
public:
  map<int,int> m;

  set(int size)
  {
    for(int i=0;i<=size;i++)
      m[i] = i;
  }

  void uni(int a, int b)
  {
    m[b] = a;
  }

  int find(int a)
  {
    if(m[a] == a)
      return a;
    else
      return find(m[a]);
  }
};

class node
{
public:
  int src,des,cost;
  node(int s, int d, int c)
  {
    src = s; des = d; cost = c;
  }
};

class graph
{
public:
  vector< pair<int,int> > *list;
  int size,i,j;
  graph(int s)
  {
    size = s+1;
    list = new vector< pair<int,int> >[size];
  }

  void insert(int src, int des, int cost)
  {
    list[src].push_back(make_pair(des, cost));
    // list[des].push_back(make_pair(src, cost));
  }

  void print()
  {
    for(i=0; i<size;i++)
    {
      for(j=0;j<list[i].size();j++)
      {
        cout<<i<<"  "<<list[i][j].first<<"  "<<list[i][j].second<<"\n";
      }
    }
  }

  void bfs()
  {
    int visited[size]; queue<int> a;

    for(i=0;i<size;i++)
      visited[i] = 0;

    a.push(1); visited[1] = 1;

    while(!a.empty())
    {
      int front = a.front();

      for(i=0; i<list[front].size();i++)
      {
        int node = list[front][i].first;
        if(visited[node] == 0)
        {
          a.push(node); visited[node] = 1;
        }
      }

      cout<<a.front()<<" ";
      a.pop();
    }
  }

  graph minSpanTree()
  {
    graph minG(size-1);
    vector<node*> a;

    for(i=0;i<size;i++)
    {
      for(j=0;j<list[i].size();j++)
      {
        a.push_back(new node(i,list[i][j].first,list[i][j].second));
      }
    }

    for(i=0;i<a.size();i++)
    {
      for(j=i+1;j<a.size();j++)
      {
        if(a[i]->cost > a[j]->cost)
        {
          node *temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
    // cout<<"\n";
    // for(i=0;i<a.size();i++)
    // {
    //   cout<<a[i]->src<<"  "<<a[i]->des<<"  "<<a[i]->cost<<"\n";
    // }

    set s(size);

    for(i=0;i<a.size();i++)
    {
      int src = a[i]->src, des = a[i]->des, cost = a[i]->cost;

      if(s.find(des) == des)
      {
        minG.insert(src, des, cost);
        s.uni(src, des);
      }
    }
    return minG;
  }
};




int main()
{
  graph g(10);
  g.insert(1,2,5);
  g.insert(2,3,10);
  g.insert(4,3,5);
  g.insert(3,4,5);
  g.insert(1,4,3);
  g.print();
  graph minG = g.minSpanTree();

  cout<<"\n\n";
  minG.print();
}
