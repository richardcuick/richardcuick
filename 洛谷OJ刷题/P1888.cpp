#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int a,b,c,t;
	cin>>a>>b>>c;
	
	if(a>b){t=a;a=b;b=t;}
	if(a>c){t=a;a=c;c=t;}
	if(b>c){t=b;b=c;c=t;}
	
	for(int i=a/2;i>1;i--)
	{
		while(a%i==0&&c%i==0)
		{
			a=a/i;
			c=c/i;
		}
	}
	
	cout<<a<<"/"<<c<<endl;
	
	return 0;	
	
}