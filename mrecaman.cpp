#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int a[500];
	a[0]=0;
	long long int i,j,m;
	std::ios::sync_with_stdio(false);
	for(i=1;i<500;++i)
	{
		a[i]=a[i-1]-i;
		if(a[i]<=0)
		{
			a[i]=a[i-1]+i;
			continue;
		}
		for(j=1;j<i;++j)
		{
			if(a[j]==a[i])
			{
				a[i]=a[i-1]+i;
				break;
			}
		}
	}
	cin >> m;
	while(m!=-1)
	{
		cout << a[m] << "\n";
		cin >> m;
		//cout << "loop \n";
	}
}