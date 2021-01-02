#include <iostream>
using namespace std;
int main()
{
	int t,m=1000007;
	long long int n,s;
	cin >> t;
	while(t--)
	{
		cin >> n;
		//s=(((3*((n%m)*(n+1))%m)/2)-(n%m))%m;
		s=((3*n*(n+1))/2)-n;
		cout << s%m << "\n";
	}
}