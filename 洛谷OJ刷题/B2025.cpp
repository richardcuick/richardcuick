#include <iostream>
#include <string>

using namespace std;

int main()
{
	int j=0;
	for(int i=0;i<5;i++)
	{
		j = i<3?i:4-i;
		cout<<string(2-j,' ')<<string(2*(j+1)-1,'*')<<endl;
	}
	return 0;
}