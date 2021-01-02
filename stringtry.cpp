#include <bits/stdc++.h>
using namespace std;
string doubler(string& s,string& out,int i)
{
	if(i==(s).size())
		return out;
	out.push_back((s).at(i));
	++i;
	doubler(s,out,i);
}
int main()
{
	string s,pass="";
	getline(cin,s);
	cout << doubler(s,pass,0) << "\n";
}