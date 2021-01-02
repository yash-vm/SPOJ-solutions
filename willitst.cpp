#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin  >> n;
	if(n==1)
		cout << "NIE \n";
	else
	{
		if(!n)
			cout << "TAK \n";
		else
		{
			if(!(n&(n-1)))
				cout << "TAK \n";
			else
				cout << "NIE \n";
		}
	}
}