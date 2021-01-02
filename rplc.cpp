#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int i,j,t,n;
	long long int min;
	cin >> t;
	for(i=1;i<=t;++i)
	{
		cin >> n;
		long long int a[n];
		for(j=0;j<n;++j)
			cin >> a[j];
		min=a[0];
		for(j=1;j<n;++j)
		{
			a[j]+=a[j-1];
			if(a[j]<min)
				min=a[j];
		}
		if(min<0)
			cout << "Scenario #" << i  << ": " << abs(min)+1 << "\n";
		else
			cout << "Scenario #" << i  << ": " << "1 \n";

	}

}