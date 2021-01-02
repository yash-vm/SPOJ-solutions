#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t,n;
	unsigned long long int ans;
	cin >> t;
	for(int j=1;j<=t;++j)
	{
		cin >> n;
		int a[n];
		unsigned long long int coins[n];
		for(int i=0;i<n;++i)
			cin >> a[i];
		if(n==0)
		{
			cout << "Case " << j << ": 0 \n";
			continue;
		}
		else if(n==1)
		{
			cout << "Case " << j << ": " << a[0] << "\n";
			continue;
		}
		coins[0]=a[0];
		coins[1]=a[1];
		if(n>2)
			coins[2]=a[2]+a[0];
		for(int i=3;i<n;++i)
		{
			coins[i]=a[i]+max(coins[i-2],coins[i-3]);
		}
		ans=max(coins[n-1],coins[n-2]);
		cout << "Case " << j << ": " << ans << "\n";
	}
}