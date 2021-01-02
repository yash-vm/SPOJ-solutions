#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t,r,c;
	cin >> t;
	while(t--)
	{
		cin >> r >> c;
		if(c>=r)
		{
			if(r&1)
				cout << "R \n";
			else
				cout << "L \n";
		}
		else
		{
			if(c&1)
				cout << "D \n";
			else
				cout << "U \n";
		}
	}
}