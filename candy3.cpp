#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	long long int n,t,x,s;
	cin >> t;
	while(t--)
	{
		s=0;
		cin >> n;
		for(int i=0;i<n;++i)
		{
			cin  >> x;
			s=(s%n+x%n)%n;
		}
		if(s==0)
			cout << "YES \n";
		else
			cout << "NO \n";
	}
}