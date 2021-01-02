#include <iostream>

using namespace std;
 
int main()
{	
		int n,i,s;
		cin >> n;
		s=n;
		for(i=2;i*i<=n;++i)
			s+=(n/i)-(i-1);
		cout << s << "\n";
}