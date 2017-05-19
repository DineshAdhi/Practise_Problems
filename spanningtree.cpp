#include<iostream>
#include<vector>
using namespace std;
class node
{
public:
  int x,y,a,b;
};

int main()
{
  vector<node> a;
  int n,e,i,j; cin>>n>>e;

  for(i=0;i<n;i++)
  {
    node temp; cin>>temp.x>>temp.y>>temp.a>>temp.b;
    a.push_back(temp);
  }

  double max = -1.0; int num,denom;
  for(i=0;i<a.size();i++)
  {
    double numSum=0, denomSum=0;
    for(j=0;j<a.size();j++)
    {
      if(j!=i)
      {
        numSum += a[j].a; denomSum +=a[j].b;
      }
    }

    if(max < numSum/denomSum)
    {
      num = numSum; denom = denomSum;
      max = numSum/denomSum;
    }
  }
  cout<<"\n";
  cout<<num<<"/"<<denom;
}
