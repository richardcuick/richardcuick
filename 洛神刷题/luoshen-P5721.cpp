#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int n,s;
	cin>>n;
	
	string str;
	
	s=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			s++;
			str=to_string(s);
			cout<<string(2-str.size(),'0')<<str;	
		}
		cout<<endl;
	}
	
	return 0;	
	
}