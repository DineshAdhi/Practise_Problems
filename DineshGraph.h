
#include "GraphNode.h"
#include "GraphList.h"

#ifndef DineshGraph_H
#define DineshGraph_H

class DineshGraph
{
private:
  int v;
  GraphList *array;
public:
  DineshGraph(int v);
  void addEdge(int src,int des);
  void printGraph();
};

#endif
