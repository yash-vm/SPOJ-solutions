#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int k,n,i,j,l,max=-1;
	cin >> n;
	int a[n];
	for(i=0;i<n;++i)
		cin >> a[i];
	cin >> k;
	int flag=1;
	for(i=0;i<n-k+1;++i)
	{
		//cout << i << "\n";
		if(flag)
		{
			max=-1;
			for(l=i;l<i+k;++l)
			{
				if(a[l]>max)
				{
					j=l;
					max=a[l];
				}
			}
			if(j!=i)
				flag=0;
		}
		else
		{
			if(a[i+k-1]>max)
			{
				j=i+k-1;
				max=a[j];
			}
			if(j==i)
				flag=1;
		}
		cout << max << " ";
	}
}