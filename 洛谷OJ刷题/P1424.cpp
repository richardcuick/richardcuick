#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int x,n,s;
	cin>>x>>n;
	
	n=n+x-1;
	
	s=floor(n/7)*250*5+((n%7)>5?5*250:(n%7)*250);
	
	s=s-((x-1)%7>5?5*250:(x-1)%7*250);
	
	cout<<s<<endl;
	
}