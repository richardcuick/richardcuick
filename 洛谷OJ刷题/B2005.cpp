#include <iostream>
#include <string>

using namespace std;

int main()
{
	char c;
	cin >> c;
	
	for(int i=0;i<3;i++)
	{
		cout << string(2-i,' ') << string(2*i+1,c) << endl;
	}
	
	return 0;
}