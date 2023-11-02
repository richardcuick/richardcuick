#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	
	cout << ((x%100!=0&&x%4==0)||(x%400==0)) << endl;
	    
    return 0;
}