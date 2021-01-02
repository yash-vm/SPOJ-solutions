#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,c14=0,c12=0,c34=0,co=1;
	float f=1;
	cin >> n;
	string blank;
	getline(cin,blank);
	while(n--)
	{
		string s;
		getline(cin,s);
		char c;
		c=s.at(2);
		if(c=='4')
		{
			if(s.at(0)=='1')
				++c14;
			else
				++c34;
		}
		else
			++c12;
		//cout << f << "\n";
	}
	//cout << c14 << c34 << c12 << "\n"; 
	int m=min(c14,c34);
	c14-=m;
	c34-=m;
	co+=m;
	co+=(c12/2);
	if(c12&1)
		c12=1;
	else
		c12=0;
	if(c34)
	{
		co+=c34;
		co+=c12;
	}
	else
	{
		//cout << co << "\n";
		if(c12)
		{
			if(c14<3)
				co++;
			else
			{
				++co;
				c14-=2;
				co+=1+(c14/4);
			}
		}
		else
		{
			co+=1+(c14/4);
		}
	}
	cout << co << "\n";
}