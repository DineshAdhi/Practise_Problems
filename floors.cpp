#include<iostream>
using namespace std;
int main()
{
  int T; cin>>T;
  while(T--){
    int N;
    cin>>N;
    int fredo=0, elevator=N,i=0;
  while(true){
    i++;
    fredo=fredo+1;
    elevator=elevator-i;

    if(i+1 < elevator - fredo)
    
      continue;
    else
      break;
  }
  int eTime=N-i; int frTime=(i * i+1)/2;
  int waitingTime=eTime-frTime;
  cout<<frTime+waitingTime+eTime<<"\n";
  }
}
