#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double k,n;
	cin>>k;
	
	n=1;
	
	while(k>=1/n)
	{
		k=k-1/n;
		n=n+1;
	}
		
	cout<<n<<endl;
	
	return 0;	
	
}