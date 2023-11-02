#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	
	double p = (a + b +c) / 2;
	
	double r = sqrt(p*(p-a)*(p-b)*(p-c));
	
	cout << setprecision(1) << std::fixed << r << endl;
    
    return 0;
}