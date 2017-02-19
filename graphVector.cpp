#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
class graph{
public:
  vector< pair<int,int> > *matrix;
  int size;
  graph(int s){
    size=s+1;
    matrix=new vector< pair<int,int> >[size];
  }

  void addEdge(int src, int des, int weight){
    matrix[src].push_back(make_pair(des,weight));
    matrix[des].push_back(make_pair(src,weight));
  }

  void printGraph(){
    for(int i=1; i<=size;i++){
      cout<<i<<" ";
      for(int v=0;v<(int)matrix[i].size();v++){
        cout<<matrix[i][v].first<<" ";
      }
      cout<<"\n";
    }
  }

  void bfs(){
    int i,*visited;
    visited=new int[size];
    for(i=1;i<=size;i++)
      visited[i]=0;

    queue<int> s;
    s.push(1);
    while(!s.empty())
    {
      visited[s.front()]=1;
      for(int ite=0; ite<(int)matrix[s.front()].size(); ite++)
      {
        if(visited[matrix[s.front()][ite].first]==0)
        {
          visited[matrix[s.front()][ite].first]=1;
          s.push(matrix[s.front()][ite].first);
        }
      }
      cout<<s.front()<<" ";
      s.pop();
    }
  }

  
};
int main()
{
  graph g(10);
  g.addEdge(1,2,3);
  g.addEdge(1,6,4);
  g.addEdge(3,6,5);
  g.bfs();
}
