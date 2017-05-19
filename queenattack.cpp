#include<iostream>
#include<map>
using namespace std;

int res = 0;

bool range(int x,int y, int n)
{
  return (x<=n && x>0 && y<=n && y>0);
}

void check(int x, int y, int xx, int yy, map<pair<int,int>,int> mp, int *ans, int n)
{
  while(range(x,y,n) && !mp[make_pair(x,y)])
  {
    x +=xx; y+=yy; res++; *ans +=1;
  }
}

int main()
{
  map<pair<int,int>,int> mp;
  int n,t; cin>>n>>t;
  int x,y; cin>>x>>y;
  while(t--)
  {
    int x,y; cin>>x>>y;
    mp[make_pair<int,int>(x,y)] = 1;
  }

  int ans = 0;

 check(x+1,y,1,0,mp,&ans,n);
 check(x-1,y,-1,0,mp,&ans,n);
 check(x,y+1,0,1,mp,&ans,n);
 check(x,y-1,0,-1,mp,&ans,n);
 check(x+1,y+1,1,1,mp,&ans,n);
 check(x+1,y-1,1,-1,mp,&ans,n);
 check(x-1,y+1,-1,1,mp,&ans,n);
 check(x-1,y-1,-1,-1,mp,&ans,n);

 cout<<ans;

}
