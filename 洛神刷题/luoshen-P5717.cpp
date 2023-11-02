#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int a,b,c,t;
	cin>>a>>b>>c;
	
	if(a>b){t=a;a=b;b=t;}
	if(a>c){t=a;a=c;c=t;}
	if(b>c){t=b;b=c;c=t;}
	
	if(a+b<=c)cout<<"Not triangle"<<endl;
	else
	{
		if(a*a+b*b==c*c)cout<<"Right triangle"<<endl;
		if(a*a+b*b>c*c)cout<<"Acute triangle"<<endl;
		if(a*a+b*b<c*c)cout<<"Obtuse triangle"<<endl;
		if(a==b||b==c)cout<<"Isosceles triangle"<<endl;
		if(a==b&&b==c)cout<<"Equilateral triangle"<<endl;
	}
	
    return 0;
}