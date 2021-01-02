#include <iostream>
using namespace std;
int getmax(int a, int b, int c)
{
	return max(max(a,b),max(b,c));
}
int main()
{
	std::ios::sync_with_stdio(false);
	int t,m,w,h;
	cin >> t;
	while(t--)
	{
		cin >> h >> w;
		int a[100][100+2]={0};
		for(int i=0;i<h;++i)
		{
			for(int j=1;j<=w;++j)
				cin >> a[i][j];
		}
		for(int i=1;i<h;++i)
		{
			for(int j=1;j<=w;++j)
				a[i][j]+=getmax(a[i-1][j],a[i-1][j-1],a[i-1][j+1]);
		}
		m=0;
		for(int j=1;j<=w;++j)
			m=max(m,a[h-1][j]);
		cout << m << "\n";
	}

}