#include <iostream>
using namespace std;
int main()
{
	long long int t,k;
	cin >> t;
	while(t--)
	{
		cin >> k;
		cout << 192+(k-1)*250 << "\n";
	}
}