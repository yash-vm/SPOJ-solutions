#include <iostream>
using namespace std;
int m=1000000007;
int mod(int n)
{
	if(n>=0)
	{
		if(n<m)
			return n;
		return n%m;
	}
	else
	{
		if(n>(-1*m))
			return m+n;
		return m+n%m;
	}
}
int fs(int n, int x, int y)
{
	int ans;
	if(n==1)
		return mod(x);
	if(n==2)
		return mod(y);
	return mod((fs(n-1,x,y))-(fs(n-2,x,y)));
}
int main()
{
	int x,y,n;
	int c[100000];
	bool b[100000]={false};
	cin >> x >> y >> n;
	c[1]=mod(x);
	c[2]=mod(y);
	b[1]=true;
	b[2]=true;
	cout << fs(n) << endl;
}