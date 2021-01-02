#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	long long int i,dn,n,t,ans;
	cin >> t;
	while(t--)
	{
		ans=1;
		cin >> dn >> n;
		for(i=1;i<=9;++i)
			ans*=(n+i);
		ans/=(362880);
		cout << dn << " " << ans << "\n";
	}
}