#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t,n;
	char c;
	cin >> t;
	for(int j=1;j<=t;++j)
	{
		cin >> n;
		short int a[40];
		short int f[223]={0};
		for(int i=0;i<40;++i)
		{
			cin >> c;
			if(c=='H')
				a[i]=1;
			else
				a[i]=2;
		}
		for(int i=0;i<38;++i)
		{
			++f[a[i]*100+a[i+1]*10+a[i+2]];
		}
		cout << n << " " << f[222] << " " << f[221] << " " << f[212] << " " << f[211] << " " << f[122] << " " << f[121] << " " << f[112] << " " << f[111] << " \n"; 
	}
}