#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
	vector<char> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= n; i++) {
	    if (is_prime[i]) {
	        for (int j = i * i; j <= n; j += i)
	            is_prime[j] = false;
	    }
	}
	float c=n;
	for(int i=2;i*i<=n;++i)
	{
		if(is_prime[i])
		{
			if (!(n%i))
			{
				c/=(1-(float)(1/i));	
			}
		}
	}
	return c;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int c=isprime(n);
		cout << c << "\n";
	}
}