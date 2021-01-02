#include <iostream>
using namespace std;
int breaker(int n)
{
	int d,s=0;
	while(n)
	{
		d=(n%10);
		s+=d*d;
		n/=10;
	}
	return s;
}
int counting(int n, int count, int vtd[])
{
	int i,s,flag=0,countp=count;
	if(n==1)
		return count;
	vtd[count]=n;
	++countp;
	s=breaker(n);
	for(i=0;i<countp;++i)
	{
		if(vtd[i]==s)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		return -1;
	}
	else
	{
		counting(s,countp,vtd);
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	int count;
	count=0;
	int vtd[1000]={0};
	cin >> n;
	count=counting(n,0,vtd);
	cout << count << "\n";
}