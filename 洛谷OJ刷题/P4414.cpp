#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int a[3],t;
	string seq;
	cin>>a[0]>>a[1]>>a[2];
	cin>>seq;
	
	if(a[0]>a[1]){t=a[0];a[0]=a[1];a[1]=t;}
	if(a[0]>a[2]){t=a[0];a[0]=a[2];a[2]=t;}
	if(a[1]>a[2]){t=a[1];a[1]=a[2];a[2]=t;}
	
	for(int i=0;i<3;i++)
	{
		if(i>0)cout<<" ";
		cout<<a[seq[i]-'A'];
	}
	cout<<endl;
	
	return 0;	
	
}