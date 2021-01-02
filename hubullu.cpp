#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);	
	long long int n, x;
	int t,p;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> p;
		if(p)
			cout << "Pagfloyd wins. \n";
		else
			cout << "Airborne wins. \n";
	}
}