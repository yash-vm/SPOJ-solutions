#include <iostream>
using namespace std;
long int o[10000001]={0};
long int optimal(long long int n)
{
	if(n>1000000)
		return (optimal(n/2)+optimal(n/3)+optimal(n/4));
	if (!n)
		return n;
	if(o[n]!=0)
		return o[n];	
	else
	{
		o[n]=(optimal(n/2)+optimal(n/3)+optimal(n/4));
		return o[n];
	}
}
int main()
{
	int i;
	for(i=0;i<12;++i)
	{
		o[i]=i;
	}
	long long int n;
	while(cin >> n)
	{
		cout << optimal(n) << "\n";
	}
}