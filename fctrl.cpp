#include <iostream>

using namespace std;
int zeros(int n)
{
	int c2=n/2;
	int c5=n/5;
	int u2=c2;
	int u5=c5;
	while(1)
	{
		u2=u2/2;
		u5=u5/5;
		if(!u2&&!u5)
			break;
		c2+=u2;
		c5+=u5;
	}
	if(c2>c5)
		return c5;
	else
		return c2;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << zeros(n) << "\n";
	}

}