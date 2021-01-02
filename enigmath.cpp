#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	std::ios::sync_with_stdio(false);
	int t,g,a,b,x,y;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		g=gcd(a,b);
		cout << b/g << " " << a/g << "\n";
	}
}