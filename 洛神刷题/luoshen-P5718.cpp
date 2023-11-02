#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int n,min;
	min=-1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(min==-1||min>a[i])min=a[i];
	}
	
	cout<<min<<endl;
	
	return 0;	
	
}