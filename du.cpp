#include <iostream>
#include<map>
#include<queue>
using namespace std;
class set
{
public:
    map<int,int> m;

    set(int s)
    {
        for(int i=0;i<=s;i++)
            m[i]= i;
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

class graph
{
public:
    int **mat, size, i, j;
    int cost;
    graph(int s)
    {
        size = s+1;
        mat = new int*[size];
        for(i=0;i<size;i++)
            mat[i] = new int[size];

        for(i=0;i<size;i++)
        for(j=0;j<size;j++)
            mat[i][j] = 0;
    }

    void insert(int des, int src, int data)
    {
        mat[des][src] = data;
    }

    void print()
    {
      for(i=0;i<size;i++)
      {
        for(j=0;j<size;j++)
          cout<<mat[i][j]<<" ";

        cout<<"\n";
      }
    }

    graph minSpanTree()
    {
        graph minGraph(size - 1);
        int visited[size];
        queue<int> a; a.push(1);
        set s(size-1);
        for(i=0;i<size;i++)
            visited[i] = 0;

        visited[1] = 1;

        while(!a.empty())
        {
            for(i=0;i<=size;i++)
            {
                if(mat[a.front()][i] != 0 && visited[i] == 0)
                {
                    visited[i] = 1;
                    a.push(i);
                    if(s.find(i) == i)
                    {
                        minGraph.insert(a.front(),i,mat[a.front()][i]);
                        minGraph.insert(i,a.front(), mat[a.front()][i]);
                        cost = cost + mat[a.front()][i];
                        s.uni(a.front(), i);
                    }
                }
            }
            a.pop();
        }
        return minGraph;
    }

    void printDegree()
    {
      for(i=1;i<size;i++)
      {
        int cnt =0;
        for(j=1;j<size;j++)
        {
          if(mat[i][j]!=0)
            cnt++;
        }

        cout<<cnt<<" ";
      }
    }
};

int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,m; cin>>n>>m;
    graph g(n);

    for(int i=0;i<m;i++)
    {
      int a,b,c; cin>>a>>b>>c;
      g.insert(a,b,c);
    }
    graph minG = g.minSpanTree();
    cout<<g.cost<<"\n";
    minG.printDegree();
  }
}
