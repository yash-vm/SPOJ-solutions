#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int i,j,flag,s,nd,fr,t;
	cin >> t;
	for(j=1;j<=t;++j)
	{
		flag=0;
		s=0;
		cin >> nd >> fr;
		short int a[fr];
		for(i=0;i<fr;++i)
			cin >> a[i];
		sort(a,a+fr,greater<int>());
		for(i=0;i<fr;++i)
		{
			s+=a[i];
			if(s>=nd)
			{
				cout << "Scenario #" << j << ": \n" << i+1 << "\n";
				flag=1;
				break;
			}
		}
		if(flag)
			continue;
		else
			cout << "Scenario #" << j << ": \n" << "impossible \n";

	}
}