#include <iostream>
using namespace std;
int linsearch(int x, int a[])
{
	for(int i=0;i<=2000;++i)
	{
		if(a[i]>=x)
			return (i-1000);
	}
	return -1;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int t,n,m,p;
	cin >> t;
	while(t--)
	{
		int a[2001]={0};
		cin >> n;
		if(n==0)
		{
			cout << "NO \n";
			continue;
		} 
		if(n==1)
		{
			cin >> m;
			cout << "YES " << m << "\n";
			continue; 
		}
		for(int i=0;i<n;++i)
		{
			cin >> m;
			++a[m+1000];
		}
		p=linsearch((n/2+1),a);
		if(p!=-1)
			cout << "YES " << p << "\n";
		else
			cout << "NO \n";

	}
}