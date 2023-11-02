#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int s, v;
	cin >> s >> v;
	
	int mins = 8*60 - 10 - (s%v==0?s/v:s/v+1);
	if(mins<0)mins+=24*60;
	string hour = to_string(mins/60);
	hour = string(2-hour.size(),'0') + hour;
	string min = to_string(mins % 60);
	min = string(2-min.size(),'0') + min;
	
	cout << hour << ":" << min << endl; 
    
    return 0;
}