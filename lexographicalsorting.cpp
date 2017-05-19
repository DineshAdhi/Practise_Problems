#include<iostream>
using namespace std;

class lexString
{
public:
  string s;
  int data;
};

int check(string a, string b)
{
  int m = (a.size() < b.size())?a.size():b.size();

  for(int i=0;i<m;i++)
  {
    if(a[i] > b[i])
      return 1;
    else
      return 0;
  }

  return -1;
}

int recursCheck(string a, string b ,int i, int s)
{
  if(a.size() == s)
    return 1;

  if(a[s]!=b[s+i])
    return 0;
  else
    return recursCheck(a,b,i,s+1);
}

int stringCheck(string a, string b)
{
  for(int i=0;i<b.size();i++)
  {
    if(a[0] == b[i])
      if(recursCheck(a,b,i,0))
      {
        return 1;
      }
  }

  return 0;
}

int main()
{
  cout<<stringCheck("bc", "aab");
  int n,i,j,m; cin>>n>>m;
  lexString *ls = new lexString[n];

  for(i=0;i<n;i++)
  {
    cin>>ls[i].s;
    ls[i].data = i;
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(!check(ls[i].s, ls[i].s))
      {
        lexString temp = ls[i];
        ls[i] = ls[j];
        ls[j] = temp;
      }
    }
  }
  cout<<"\n\n";

  for(i=0;i<m;i++)
  {
    string a; cin>>a;

    for(j=0;j<n;j++)
    {
      if(stringCheck(a, ls[j].s))
      {
        cout<<ls[j].data<<" ";
      }
    }
    cout<<"\n";
  }
}
