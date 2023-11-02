#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int mins = c* 60 + d - a*60 - b;
	int hour = mins / 60;
	int min = mins % 60;
	
	cout << hour << " " << min << endl;
    
    return 0;
}