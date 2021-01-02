#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t,n,m,i,min,dif,j;
	cin >> t;
	while(t--)
	{
		min=2000000000;
		cin >> n;
		int a[n];
		for(i=0;i<n;++i)
		{
			cin >> a[i];
		}
		cin >> m;
		int b[m];
		for(i=0;i<m;++i)
		{
			cin >> b[i];
		}
		for(i=0;i<n;++i)
		{
			for(j=0;j<m;++j)
			{
				dif=abs(a[i]-b[j]);
				if(min>dif)
					min=dif;
			}
		}
		cout << min << "\n";
	}
}