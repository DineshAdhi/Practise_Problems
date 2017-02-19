#include <iostream>
#include<vector>
using namespace std;


int main(){
    vector< vector<int> > a(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> a[arr_i][arr_j];
       }
    }
    long long sum=0,res=0;
    for(int i=1;i<=4;i++)
        {
        for(int j=1;j<=4;j++)
            {
            sum=a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if(res<sum)
                {
                res=sum;
                sum=0;
            }
        }
    }
    cout<<res;
    return 0;
}
