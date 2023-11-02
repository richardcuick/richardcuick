#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	
	int local=5*x;
	int luogu=11+3*x;
	
	cout<<(local<=luogu?"Local":"Luogu")<<endl;
	    
    return 0;
}