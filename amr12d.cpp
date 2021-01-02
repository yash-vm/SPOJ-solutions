#include <bits/stdc++.h>
using namespace std;
bool palind(string s)
{
	int l=s.length();
	int i=l/2;
	while(i--)
	{
		if(s.at(i)!=s.at(l-i-1))
			return false;
	}
	return true;
}
int main()
{
	string s;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> s;
		if(palind(s))
			cout << "YES \n";
		else
			cout << "NO \n";
	}
}