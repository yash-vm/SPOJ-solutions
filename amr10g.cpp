#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int i,h,n,k,min,d;
		cin >> n;
		cin >> k;
		int s[n];
		for(i=0;i<n;++i)
		{
			cin >> s[i];
		}
		sort(s,s+n);
		min=s[n-1]-s[0];
		d=min;
		//cout << d << "\n";
		for(i=0;i<=n-k;++i)
		{
			d=s[i+k-1]-s[i];
			if(min>d)
				min=d;
			//cout << min << "\n";
		}
		cout << min << "\n";
	}
}