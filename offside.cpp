#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	while(1)
	{
	int n,m,i,max2,flag;
	cin >> n >> m;
	if(n==0 && m==0)
		break;
	int a[n];
	int d[m];
	for(i=0;i<n;++i)
		cin >> a[i];
	for(i=0;i<m;++i)
		cin >> d[i];
	sort(d,d+m);
	i=1;
	max2=d[0];
	flag=0;
	/*while(i<m)
	{
		if(d[i]!=d[i-1])
		{
			max2=d[i];
			break;
		}
		++i;
	}*/
	if(d[1]==d[0])
	{
		max2=d[0];
	}
	else
		max2=d[1];
	i=0;
	while(i<n)
	{
		if(a[i]<max2)
		{
			cout << "Y \n";
			flag=1;
			break;
		}
		++i;
	}
	if(!flag)
		cout << "N \n";
}
}