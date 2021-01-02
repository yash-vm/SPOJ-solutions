#include <iostream>
using namespace std;
int fun(int x, int n, int coins, int a[])
{
	if(x>=n)
		return coins;
	int xn=x+1;
	cout << coins << "\n";
	int coinsn=coins+a[x];
	int addcoins=0;
	while(xn<n)
	{
		++xn;
		int add=fun(xn,n,coinsn,a);
		//addcoins=max(addcoins,fun(xn,n,coinsn,a));
		if(add>addcoins)
			addcoins=add;
	}
	return addcoins;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,ans=0,max=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;++i)
			cin >> a[i];
		for(int i=0;i<1;++i)
		{
			ans=a[i]+fun(i,n,0,a);
			if(ans>max)
				max=ans;
		}
		cout << max << "\n";
	}
}