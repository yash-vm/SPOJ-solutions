#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k,n,j,i,h=0;
		int m[11]={0};
		int w[11]={0};
		cin >> n;
		for(i=0;i<n;++i)
		{
			cin >> j;
			++m[j];
		}
		for(i=0;i<n;++i)
		{
			cin >> j;
			++w[j];
		}
		for(i=10;i>=0;--i)
		{
			if(!m[i])
				continue;
			for(j=10;j>=0;--j)
			{
				if(!w[j])
					continue;
				k=min(w[j],m[i]);
				w[j]-=k;
				m[i]-=k;
				h+=j*i*k;
				if(!m[i])
					break;
			}
		}
		cout << h << "\n";
	}
}