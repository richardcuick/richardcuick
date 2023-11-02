#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int k,s;
	cin>>k;
	
	s=0;
	
	for(int i=1;i<k+1;i++)
	{
		s=s+i;
	}
	
	cout<<s<<endl;
	
	return 0;	
}