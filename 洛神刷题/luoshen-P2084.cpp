#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m;
    string n;
    cin >> m >> n;
    
    int len = n.size();

	for(int i =0;i<len;i++)
	{
		if(n[i]=='0')continue;
		if(i>0) cout << "+";
		cout << n[i] << "*" << m << "^" << (len-i-1);
	}
    return 0;
}