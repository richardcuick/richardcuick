#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int sum,check,j;
	string s,r;
	cin>>s;
	j=0;
	for(int i=0;i<11;i++)
	{
		if(s[i]!='-')
		{
			j++;
			sum=sum+(s[i]-'0')*j;
		}
		r=r+s[i];
	}
	
	if(s[12]=='X')check=10;
	else check=s[12]-'0';
	
	
	if(sum%11==check)cout<<"Right"<<endl;
	else
	{
		if(sum%11==10)r=r+"-X";
		else r=r+"-"+char('0'+sum%11);
		cout<<r<<endl;
	}
	
	return 0;	
	
}