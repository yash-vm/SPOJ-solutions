#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t,m,n,d,c,h;
	cin >> t;
	while(t--)
	{
		c=0;
		cin >> n >> m >> d;
		while(n--)
		{
			cin >> h;
			c+=(h-1)/d;
		}
		if(c>=m)
			cout << "YES \n";
		else
			cout << "NO \n";
	}
}