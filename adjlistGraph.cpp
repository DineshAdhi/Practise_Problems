#include <iostream>
#include <queue>
using namespace std;
class graphNode
{
public:
  int vertice;
  int data;
  graphNode *next = NULL;
};
class graph
{
public:
  int size;
  graphNode *node;
  graph(int s)
  {
    size = s;
    node = new graphNode[s + 1];
  }

  void addEdge(int src, int des, int data)
  {
    graphNode *newNode = new graphNode();
    newNode->data = data;

    graphNode ptr = node[src];
    while (ptr.next != NULL)
    {
      ptr = ptr.next;
    }

    ptr.next = newNode;
    ptr.vertice = des;
  }

  void bfs()
  {
    queue<int> a;
    int visited[size], i;
    for (i = 1; i <= size; i++)
    {
      visited[i] = 0;
    }
    a.push(1);
    while (!a.empty())
    {
    }
  }

  void print()
  {
    for (int i = 1; i <= size; i++)
    {
      graphNode *ptr = node;
      cout << i << " ";
      while (ptr != NULL)
      {
        cout << "->" << ptr[i].vertice << " ";
        ptr = ptr->next;
      }
      cout << "\n";
    }
  }
};
int main()
{
  graph g(6);
  g.addEdge(1, 4, 20);
  g.addEdge(1, 6, 20);
  g.print();
}
