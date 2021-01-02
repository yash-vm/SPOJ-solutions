#include <iostream>

using namespace std;
int rev(int n)
{
	int nn=0;
	while(n)
	{
		nn=nn*10+n%10;
		n=n/10;
	}
	return nn;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a;
		cin >> b;
		cout << rev(rev(a)+rev(b)) << "\n";
	}

}