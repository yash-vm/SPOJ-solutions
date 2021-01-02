#include <iostream>
#include <string>
using namespace std;
string add(string c0, string c1, string ans , int flag)
{
	int c0l=c0.size();
	int c1l=c1.size();
	int i,adder,carry=0;
	if(c0l>=c1l)
	{
		if(flag)
		{
			for(i=c0l-1;i>=c0l-c1l;--i)
			{
				char ch0=c0.at(i);
				char ch1=c1.at(i-c0l+c1l);
				adder=carry+(int)(ch0+ch1-'0'-'0');
				if(adder>9)
				{
					carry=adder/10;
					ans.append(to_string(adder),1,1);
				}
				else
				{
					carry=0;
					ans.append(to_string(adder),0,1);
				}
			}
			for(i=c0l-c1l-1;i>=0;--i)
				ans.push_back(c0.at(i));
		}
	}
	
	return ans;
}
int main()
{
	string c0,c1,ans="";
	cin >> c0 >> c1;
	string ans1=add(c0,c1,ans);
	cout << ans1;
}