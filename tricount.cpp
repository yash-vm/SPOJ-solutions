#include <iostream>
using namespace std;
int main()
{
	int t;
	long long int ans,n;
	cin >> t;
	while(t--)
	{
		scanf("%lld",&n);
		ans=(n*(n+2)*(2*n+1))/8;
		printf("%lli \n", ans);
	}
}