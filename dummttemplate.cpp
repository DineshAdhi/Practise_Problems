#include<iostream>
using namespace std;
template<class T>
class dummy
{
public:
  void perform(T a)
  {
    cout<<a;
  }

};
template<>void dummy<int>::perform(int a)
{
  cout<<a/2;
}



int main()
{
  dummy<int> d;
  d.perform(10);
}
