#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int h, r;
	cin >> h >> r;
	
	double t = ceil(20 / (h * 3.1415926 * r * r / 1000));
	
	cout << (int)t << endl;	
    
    return 0;
}