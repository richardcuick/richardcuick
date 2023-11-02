#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int l,i,n;
	cin>>l;
	n=0;
	i=2;
	bool f;
	
	while(l-i>=0)
	{
		f=true;
		for(int j=i/2;j>1;j--)
		{
			if(i%j==0)
			{
				f=false;
				break;
			}
		}
		if(!f)
		{
			i++;
			continue;
		}
		else
		{
			cout<<i<<endl;
			l=l-i;
			n=n+1;
			i=i+1;
		}
	}
	
	cout<<n<<endl;
	
	return 0;
	
}