#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--)
	{
		long long int a,b,d=0;
		char c=' ';
		cin >> a;
		while(1)
		{
			cin >> c;
			if(c=='=')
				break;
			cin >> b;
			switch(c)
			{
				case '+':
				{
					d=a+b;
					break;
				}
				case '-':
				{
					d=a-b;
					break;
				}
				case '*':
				{
					d=a*b;
					break;
				}
				case '/':
				{
					d=a/b;
					break;
				}
			}
			a=d;
			//cout << d << "\n";	
		}
		cout << d << "\n";
	}
}