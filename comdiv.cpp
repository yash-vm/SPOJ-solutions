#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
	long long int i,j;
	vector <bool> sieve(1000000+1,true);
	//ios_base::sync_with_stdio(false);
	for(i=3;i<=1000;i+=2)
	{
		if (sieve[i]&&i<=1000) 
		{
       		for (int j = i*i; j<=1000000;j+=i)
           		sieve[j] = false;
   		}
	}
	long long int t;
	//cin >> t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a,b,nfacts=1;
		long long int i=0;
		//cin >> a >> b;
		scanf("%lld %lld",&a,&b);
		long long int num=gcd(a,b);
		//long long int sqrtnum=floor(sqrt(num));
		if(!(num&1))
		{
			while(!(num&1))
			{
				num=num>>1;
				++i;
			}
			nfacts*=(i+1);
		}
		
		for(i=3;num>1&&i<=num;i+=2)
		{
			int c=0;
			if(sieve[i])
			{
				while(num%i==0)
				{
					++c;
					num/=i;
				}
				nfacts*=(c+1);
			}
		}
		//cout << nfacts << "\n";
		printf("%lld \n",nfacts);
	}
}