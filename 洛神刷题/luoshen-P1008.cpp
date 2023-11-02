#include <iostream>
#include <string>

using namespace std;

int main()
{
	for(int i=100;i<1000/3+1;i++)
	{
		string s = to_string(i) + to_string(i*2) + to_string(i*3);
		bool f = false;
		for(int j=0;j<s.size()-1;j++)
		{
			for(int k=j+1;k<s.size();k++)
			{
				if(s[j]==s[k]||s[j]=='0'||s[k]=='0')
				{
					f = true;
					break;
				}
			}
			if(f)break;
		}
		if(!f) cout << i << " " << i*2 << " " << i*3 << endl;
	}
	return 0;
}