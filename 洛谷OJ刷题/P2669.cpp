#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int k,n,i;
	cin>>k;
	
	n=0;
	i=1;
	
	while(k-i>=0)
	{
		k=k-i;
		n=n+i*i;
		i=i+1;
	}
	
	n=n+k*i;
	
	cout<<n<<endl;
	
	
	return 0;	
	
}