#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int n,d;
	cin>>n;
	
	while(n!=1)
	{
		n=floor(n/2);
		d++;
	}
	
	cout<<d+1<<endl;
	
	
	return 0;	
	
}