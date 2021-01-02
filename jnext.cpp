#include <iostream>
#include <algorithm>
using namespace std;
void swap(int p,int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
int mini(int a[],int k)
{
	int i,mi,min=10;
	for(i=0;i<k;++i)
	{
		if(min>a[i])
		{
			min=a[i];
			mi=i;
		}
	}
	return mi;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int k,n,t,j,i,flag,mi;
	cin >> t;
	while(t--)
	{
		flag=0;
		cin >> n;
		int a[n];
		int b[n];
		int c[n];
		for(i=0;i<n;++i)
			cin >> a[i];
		k=0;
		for(i=n-1;i>=1;--i)
		{
			if(a[i-1]<a[i])
			{
				for(j=i;j<n;++j)
				{	
					if(a[j]>a[i-1])
					{
						b[k]=a[j];
						c[k]=j;
						++k;
					}
				}
				if(k)
				{
					mi=mini(b,k);
					int temp=a[i-1];
					a[i-1]=a[c[mi]];
					a[c[mi]]=temp;
					sort(a+i,a+n);
					flag=1;
					break;
				}
			}
		}
		if(flag)
		{
			for(i=0;i<n;++i)
				cout << a[i];
			cout << "\n";
		}
		else
		{
			cout << "-1 \n";
		}
	}
}