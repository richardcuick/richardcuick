#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	
	cout << "Today, I ate "<<x<<" apple"<<string((x>1),'s')<<"."<<endl;
	    
    return 0;
}