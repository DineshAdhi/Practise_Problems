#include<iostream>
using namespace std;

int knapsack(int *w, int *val, int W, int n)
{
  if(W==0 || n==0)
    return 0;

  if(w[n-1]>W)
    return knapsack(w, val, W, n-1);
    
  else
    return max(val[n-1]+knapsack(w,val,W-w[n-1],n-1), knapsack(w,val,W,n-1));
}

int main()
{
  int w[3] = {10,20,30};
  int val[3] = {60,100,120};
  int W = 50;

  cout<<knapsack(w,val,W,3);
}
