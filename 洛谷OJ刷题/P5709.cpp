#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int m,t,s;
	cin>>m>>t>>s;
	
	int eat = 0;
	if(t==0) eat=m;
	else{
		if(s/t>m) eat=m;
		else eat=(s%t==0?s/t:s/t+1);
	}
	
	cout<<m-eat<<endl;
	    
    return 0;
}