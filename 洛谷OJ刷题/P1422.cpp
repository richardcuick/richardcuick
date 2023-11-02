#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int n;
	float s;
	cin>>n;
	
	if(n<=150)s=0.4463*n;
	if(n>150&&n<400)s=0.4463*150+(n-150)*0.4663;
	if(n>=400)s=0.4463*150+(400-150)*0.4663+(n-400)*0.5663;
	
	cout<<setprecision(1)<<std::fixed<<s<<endl;
	
	
	
	
	
    return 0;
}