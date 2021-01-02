#include <iostream>
using namespace std;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
bool probablyPrimeFermat(int n, int iter=5) {
    if (n < 4)
        return n == 2 || n == 3;

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (binpow(a, n - 1, n) != 1)
            return false;
    }
    return true;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int i,m,n,t;
	cin >> t;
	while(t--)
	{
		cin >> m >> n;
		for(i=m;i<=n;++i)
		{
			if(probablyPrimeFermat(i))
				cout << i << "\n";
		}
	}
}