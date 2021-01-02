#include <iostream>
using namespace std;
long long int c[2000][2000]={0};
long long int trt(int l, int r, int a[], int n)
{
	int age=n-(r-l);
	if(l>r)
		return 0;
	else
	{
		if(c[l][r]!=0)
			return c[l][r];
		c[l][r]=max((trt(l+1,r,a,n)+a[l]*age),trt(l,r-1,a,n)+a[r]*age);
		return c[l][r];
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	int i,n;
	cin >> n;
	int a[n];
	for(i=0;i<n;++i)
		cin >> a[i];
	long long int sum=trt(0,n-1,a,n);
	cout << sum << "\n";
}