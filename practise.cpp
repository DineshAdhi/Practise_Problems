#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

 int primeFac(int num)
{
	int temp=num;
	int count=0;

  if(temp ==1)
  {
    count++;
  }
	while(temp%2==0)
	{
		temp=temp/2;
		count++;
    while(temp%2==0)
    {
      temp=temp/2;
    }
	}

		for(int i=3;i<=sqrt(temp);i=i+2)
		{

        while(temp%i==0)
  			{
  				temp=temp/i;
  				count++;
          while(temp%i==0)
          {
            temp=temp/i;
          }
  			}

		}

    if(temp>2)
    {
      count++;
    }

		return count;
}

 int countDigits(int num)
{
	 int digits=0;
	while(num!=0)
	{
		num=num/10;
		digits++;
	}

	return digits;
}

bool naughtNum(int a)
{
  return primeFac(a)==countDigits(a);
}

int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int a,b,count=0;
    int s;
    cin>>a>>b;
   	int array[100000];
    array[0]=1;
    for(int i=1;i<=100000;i++)
		{
			array[i]=array[i-1]+naughtNum(i);
		}

    cout<<array[b]-array[a-1]<<"\n";
  }


}
