#include<iostream>
#include<queue>
using namespace std;
class graph{
public:
  int size, **matrix, *parent;

  graph(int s){
    int i,j;
    size=s+1;
    matrix=new int*[size];
    parent=new int[size];
    for(i=0;i<size;i++){
      matrix[i]=new int[size];
    }

    for(i=0;i<size;i++){
      for(j=0;j<size;j++)
        matrix[i][j]=0;
    }

    for(i=0;i<size;i++)
    {
      parent[i]=0;
    }
  }

  void addEdge(int src, int des, int weight){
    matrix[des][src]=weight;
    matrix[src][des]=weight;
    parent[des]=src;
  }

  void removeEdge(int src, int des, int weight){
    matrix[des][src]=0;
    matrix[src][des]=0;
    parent[des]=0;
  }

  void print(){
    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
        cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
    }
  }

  void superPrint(){
    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
        if(matrix[i][j]!=0){
          cout<<i<<" "<<j<<" "<<matrix[i][j]<<"\n";
        }
      }
    }
  }

  void pushValue(queue<int> *a){
    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
        if(matrix[i][j]!=0){
          a->push(i);
          return;
        }
      }
    }
  }

  int detectCyle(){
    int visited[size],i,j;
    queue<int> a;

    pushValue(&a);
    while(!a.empty())
    {
      visited[a.front()]=1;
      for(i=0;i<size;i++)
      {
          if(matrix[a.front()][i]!=0)
          {
            if(visited[i]==0){
              visited[i]=1;
              a.push(i);
            }
            else if(visited[i]==1){
              if(parent[a.front()]==i)
                continue;
              else
              {
                return 1;
              }
            }
          }
      }

      a.pop();
    }

    return 0;
  }

  void bfs(){
    int i,j,visited[size];
    for(i=0;i<size;i++)
      visited[i]=0;

    queue<int> a; a.push(1);
    while(!a.empty())
    {
      visited[a.front()]=1;
      for(i=1;i<size;i++)
      {
        if(matrix[a.front()][i]!=0)
        {
          if(visited[i]==0)
          {
            a.push(i);
            visited[i]=1;
          }
        }
      }
      cout<<a.front()<<" ";
      a.pop();
    }
  }
};

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
  }

void primsAlgo(int *src, int *des, int *weight, int edges, int n){

  int i,j;
  graph a(n);
  for(i=0;i<edges;i++){
    for(j=i+1;j<edges;j++){
      if(weight[i] > weight[j])
      {
        swap(&weight[i],&weight[j]);
        swap(&src[i],&src[j]);
        swap(&des[i],&des[j]);
      }
    }
  }

  cout<<"\n\n";

  for(i=0;i<edges;i++){
    cout<<src[i]<<" "<<des[i]<<" "<<weight[i]<<"\n";
  }

  int visited[n],parent[n];
  for(i=0;i<n;i++)
  {
    visited[i]=0;
    parent[i]=0;
  }

  for(i=0;i<edges;i++){
    if(visited[des[i]]==0){
      a.addEdge(src[i],des[i],weight[i]);
      parent[des[i]]=src[i];
    }
    else{

    }
  }
  a.superPrint();

}

int main(){

  int i,j,nodes,edges;
  cin>>nodes>>edges;
  int src[edges],des[edges],weight[edges];
  for(i=0;i<edges;i++){
    cin>>src[i]>>des[i]>>weight[i];
  }
  primsAlgo(src,des,weight,edges,nodes);
}
