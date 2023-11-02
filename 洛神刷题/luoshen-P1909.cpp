#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int n,c;
	
	cin>>n;
	
	int s,p,num,sum,j;
	
	for(int i=0;i<3;i++)
	{
		num=0;
		sum=0;
		j=0;
		cin>>s>>p;
		while(num<n)
		{
			num=num+s;
			sum=sum+p;
		}
		
		if((c==0||c>sum)&&num>=n)
		{
			c=sum;
		}
		
				
	}
	
	cout<<c<<endl;
	    
    return 0;
}