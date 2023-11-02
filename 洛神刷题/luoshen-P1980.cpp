#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int n,x;
	char c;
	string str;
	cin>>n;
	cin>>c;
	
	x=0;
	
	for(int i=1;i<n+1;i++)
	{
		str=to_string(i);
		for(int j=0;j<str.size();j++)
		{
			if(str[j]==c)x++;
		}
	}
	cout<<x<<endl;
	
	return 0;	
	
}