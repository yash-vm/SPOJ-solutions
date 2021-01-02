#include <iostream>
using namespace std;
int main()
{
	float x,n;
	while(1)
	{
		n=2.0;
		cin >> x;
		if(!x)
			break;
		while(x>=(1/n))
		{
			x-=(1/n);
			++n;
		}
		cout << (n-1) << " card(s) \n";
	}

}