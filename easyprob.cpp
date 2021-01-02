#include <bits/stdc++.h>
using namespace std;

string rep(int x,string out)
{
	
	if(x==1)
	{
		out.append("2(0)");
		return out;
	}
	if(x%2)
	{
		out.append("2(0)+");
		rep(--x,out);
	}
	else
	{
		int i;
		while(!(x%2))
		{
			x=x/2;
			cout << x << "\n";
		}
		if(x==1)
		{
			out.append("2(");
			out.append(std::to_string(i));
			out.append(")+2(0)");
			return out;
		}
		else
		{
			out.append("2(");
			out.append(rep(i,""));
			out.append(")+");
			rep(x,out);
		}
	}
}
int main()
{
	int x;
	cin >> x;
	cout <<rep(x,"");
}