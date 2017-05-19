#include<iostream>
#include<vector>
using namespace std;
int maximum(int a, int b)
{
  if(a>b)
    return a;

  return b;
}

int findmaxSum(int **a, int max, int i, int j, int n, vector<int> path)
{
  if(i>=n || i<0 || j>=n || j<0)
    return 0;

  max = max + a[i][j];

  path.push_back(a[i][j]);

  if(i==n-1 && j==n-1)
  {
    for(int s=0; s<path.size(); s++)
      cout<<path[s]<<" ";

    cout<<"\n";
    
    return max;
  }


  return maximum(findmaxSum(a, max, i+1,j, n, path), findmaxSum(a, max, i, j+1,n, path));
}

int main()
{
  int n; cin>>n;

  int **a = new int*[n],i,j;

  for(i=0;i<n;i++)
    a[i] = new int[n];

  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    cin>>a[i][j];

  vector<int> path;
  cout<<findmaxSum(a, 0, 0, 0, n,path);

}
