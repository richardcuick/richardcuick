#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	float m,n;
	cin >> m >> n;
	
	float bmi = m/(n*n);
	
	if(bmi<18.5) cout<<"Underweight"<<endl;
	else
	{
		if(bmi<24)cout<<"Normal"<<endl;
		else cout<<bmi<<endl<<"Overweight"<<endl;
	}
	    
    return 0;
}