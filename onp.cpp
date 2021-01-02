#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,sl,t;
	cin >> t;
	string blank;
	getline(cin,blank);
	while(t--)
	{
		string s,out="";
		getline(cin,s);
		sl=s.size();
		stack <int> rpn;
		for(i=0;i<sl;++i)
		{
			if(s.at(i)=='(')
				continue;
			else if(s.at(i)==')')
			{
				out.push_back(rpn.top());
				rpn.pop();
				continue;
			}
			else
			{
				switch(s.at(i))
				{
					case '+':
					case '-':
					case '*':
					case '/':
					case '^':
					{
						rpn.push(s.at(i));
						break;
					}
					default:
						out.push_back(s.at(i));
				}
			}
		}
		cout << out << "\n";
	}
}