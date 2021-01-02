#include <iostream>
using namespace std;
int main()
{
	//std::ios::sync_with_stdio(false);
	long long int a,b,c;
	unsigned long long int s;
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &a, &b, &c);
		//cin >> a >> b >> c;
		s=a*a-2*b;
		//cout << s << "\n";
		printf("%lld \n",s);
	}
}