#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	
	bool t1 = (x % 2 == 0);
	bool t2 = (x>4 && x<=12);
	
	cout<<(t1&&t2)<<" "<<(t1||t2)<<" "<<((t1&&!t2)||(!t1&&t2))<<" "<<(!t1&&!t2)<<endl;
	    
    return 0;
}