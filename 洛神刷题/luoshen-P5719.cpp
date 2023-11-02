#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int n,k,num;
	double x,y;
	cin>>n>>k;
	
	num=0;
	x=0;
	y=0;
	
	for(int i=1;i<n+1;i++)
	{
		if(i%k==0)
		{
			num++;
			x=x+i;
		}
		else
		{
			y=y+i;
		}
	}
	
	cout<<setprecision(1)<<std::fixed<<(x/num)<<" "<<(y/(n-num))<<endl;
	
	
	return 0;	
	
}