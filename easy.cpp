#include <iostream>
using namespace std;
int main()
{
	int t;
	long long int n,i,a,d,s,tt,tlt;
	cin >> t;
	while(t--)
	{
		cin >> tt >> tlt >> s;
		n=(2*s)/(tt+tlt);
		d=(tlt-tt)/(n-5);
		a=tt-(2*d);
		cout << n << "\n";
		for(i=1;i<=n;++i)
			cout << a+(i-1)*d << " ";
	}
}