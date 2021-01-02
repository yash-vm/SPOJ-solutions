#include <bits/stdc++.h>
using namespace std;
int hamming(string a, string b)
{
	int sl=a.length();
	int d=0;
	for(int i=0;i<sl;++i)
	{
		if(a.at(i)!=b.at(i))
			++d;
	}
	return d;
}
int main()
{
	string a,b;
	cin >> a;
	cin >> b;
}
