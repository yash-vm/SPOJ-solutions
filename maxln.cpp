#include <iostream>
using namespace std;
int main()
{
	int t;
	long long int r;
	cin >> t;
	for(int j=1;j<=t;++j)
	{
		cin >> r;
		cout << "Case " << j << ": " << 4*r*r << ".25 \n";
	}
}