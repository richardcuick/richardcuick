#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int x[10],h,s;
	
	for(int i=0;i<10;i++)cin>>x[i];
	
	cin>>h;
	
	for(int i=0;i<10;i++)
	{
		if(x[i]<=h+30)s=s+1;
	}
	
	cout<<s<<endl;
	
	return 0;	
	
}