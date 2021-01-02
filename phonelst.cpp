#include <bits/stdc++.h>
using namespace std;

bool compare(string &s1,string &s2) 
{ 
    return (s1.size()<s2.size()); 
} 
bool compare_prefix(string s1,string s2)
{
	int s1l=s1.length();
	int i,c=0;
	for(i=0;i<s1l;++i)
	{
		if(s1.at(i)==s2.at(i))
			++c;
	}
	if(c==s1l)
		return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int n,sl,t,i,j;
	string s;
	cin >> t;
	while(t--)
	{
		int flag=0;
		cin >> n;
		string ins[n];
		getline(cin,s);
		for(i=0;i<n;++i)
		{
			getline(cin,s);
			ins[i]=s;
		}
		sort(ins,ins+n,compare);
		for(i=0;i<n;++i)
		{
			for(j=i+1;j<n;++j)
			{
				if(compare_prefix(ins[i],ins[j]))
				{
					cout << "NO \n";
					flag=1;
					break;
				}
			}
			if(flag)
				break;
		}
		if(!flag)
			cout << "YES \n";
	}
}