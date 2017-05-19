#include<iostream>
using namespace std;
class node
{
private:
  static int data;

public:
  static int getData()
  {
    data++;
    return data;
  }
};

int main()
{
node n;
n.getData();
}
