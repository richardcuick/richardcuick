#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int h1,h2,t,d;
	
	for(int i=0;i<7;i++)
	{
		cin >> h1 >> h2;
		if(h1+h2>8&&h1+h2>t)
		{
			t=h1+h2;
			d=i+1;
		}
	}
	cout<<d<<endl;
	    
    return 0;
}