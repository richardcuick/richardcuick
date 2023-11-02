#include <iostream>
#include <string>

using namespace std;

int main()
{
	char c;
	cin >> c;
	//cout << (int)'q' << endl;
	//cout << (int)'Q' << endl;
	cout << (char)(c-32) << endl;
	return 0;
}