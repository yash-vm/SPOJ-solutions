#include <iostream>
using namespace std;
int binsearch(int x, int l, int r, int a[])
{
	if(r>=l)
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
			return mid;
		else
		{
			if(a[mid]>x)
				return binsearch(x,l,mid-1,a);
			else
				return binsearch(x,mid+1,r,a);
		}
	}
	return -1;
}
long long int sum(int l,int r,int a[])
{
	long long int s=0;
	for(int i=l;i<r;++i)
		s+=a[i];
	return s;
}
long long int maxsum(int com[][2],int a[],int b[],int k)
{
	long long int s=0;
	for(int i=0;i<k-1;++i)
	{
		s+=max(sum(com[i][0],com[i+1][0],a),sum(com[i][1],com[i+1][1],b));
	}
	return s;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int n,k,m,i,j;
	long long int s;
	while(1)
	{
		s=0;
		cin >> n;
		if(n==0)
			break;
		int a[n];
		for(i=0;i<n;++i)
			cin >> a[i];
		cin >> m;
		int b[m];
		for(i=0;i<m;++i)
			cin >> b[i];
		k=0;
		int com[min(m,n)][2];
		if(m>n)
		{
			for(i=0;i<n;++i)
			{
				j=binsearch(a[i],0,m,b);
				if(j!=-1)
				{
					com[k][0]=i;
					com[k][1]=j;
					++k;
				}
			}
		}
		else
		{
			for(i=0;i<m;++i)
			{
				j=binsearch(b[i],0,n,a);
				if(j!=-1)
				{
					com[k][0]=j;
					com[k][1]=i;
					++k;
				}
			}		
		}
		if(k==0)
		{
			s=max(sum(0,n,a),sum(0,m,b));
			cout << s << "\n";
			continue;
		}
		s=max(sum(0,com[0][0],a),sum(0,com[0][1],b))+max(sum(com[k-1][0],n,a),sum(com[k-1][1],m,b));
		s+=maxsum(com,a,b,k);
		cout << s << "\n";
	}
}