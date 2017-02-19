#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int i,j,N,X,sum,flag=0;
		cin>>N>>X;
		vector<int> a(N);
		for(i=0;i<N;i++)
		{
			cin>>a[i];
		}

		for(i=0;i<N;i++)
		{
			sum=a[i];
			for(j=i+1;j<N;j++)
			{
				sum=sum+a[j];
				if(sum==X)
        {
          flag=1;
          break;
        }
			}
      if(sum==X)
      break;
		}
    if(flag==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";

	}
}
