#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int p;
	cin >> p;
	
	float pi = 3.141593;
	double s;
	int n;
	
	switch(p)
	{
		case 1:
			cout << "I love Luogu!" << endl;
			break;
		case 2:
			cout << "6 4" << endl;
			break;
		case 3:
			cout << 3 << endl;
			cout << 12 << endl;
			cout << 2 <<endl;
			break;
		case 4:
			cout << setprecision(6-3) << std::fixed << 500.0/3.0 << endl;
			break;
		case 5:
			cout << (220+260)/(20+12) << endl;
			break;
		case 6:
			cout << sqrt(6*6+9*9) << endl;
			break;
		case 7:
			cout << 100 + 10 << endl;
			cout << 110 - 20 << endl;
			cout << 0 << endl;
			break;
		case 8:
			cout << 2*pi*5 << endl;
			cout << pi*5*5 << endl;
			cout << pi*5*5*5*4/3 << endl;
			break;
		case 9:
			cout<<22<<endl;
			break;
		case 10:
			cout<<9<<endl;
			break;
		case 11:
			cout<<100.0/(8.0-5.0)<<endl;
			break;
		case 12:
			cout<<('M'-'A')+1<<endl;
			cout<<char('A'+17)<<endl;
			break;
		case 13:
			s = pi*(4*4*4+10*10*10)*4/3;
			n=1;
			while(n*n*n<s)n++;
			cout<<n-1<<endl;
			break;
		case 14:
			cout<<50<<endl;
			break;
	}
    
    return 0;
}