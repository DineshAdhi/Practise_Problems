#include<cstring>
#include<iostream>
using namespace std;
class Emap
{
public:
  string name;
  int ph;

  Emap(string personName,int phone)
  {
    name=personName;
    ph=phone;
  }

  Emap()
  {

  }
};
int main()
{
  int N,i,j,temp=0;
  Emap *m;
  string *inputNames;
  cin>>N;
  m=new Emap[N];
  inputNames=new string[N];
  for(i=0;i<N;i++)
  {
    cin>>m[i].name;
    cin>>m[i].ph;
  }

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      if(strcmp(m[j].name,inputNames[i])==0)
      {
        cout<<m[j].name<<" : "<<m[j].ph;
        break;
      }
      else
      {
        temp++;
        if(temp==N-1)
          cout<<"not found";
      }
    }
  }

}
