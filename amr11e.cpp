#include <bits/stdc++.h>
using namespace std;
//#define MAX_SIZE 
int main()
{
	int j,i,t,n=3000;
	vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;
	for (i = 2; i * i <= n; i++) 
	{
   	 	if (is_prime[i]) 
   	 	{
   	    	for (j = i * i; j <= n; j += i)
        		is_prime[j] = false;
   	 	}
	}
	//cout << is_prime[2] << "\n";
	int k=1;
	int c;
	int is_lucky[3000]={0};
	for(i=2;i<3000;++i)
	{
		c=0;
		for(j=2;j<=i/2;++j)
		{
			if(is_prime[j])
			{
				if(i%j==0)
				{
					++c;
				}
			}
			if(c==3)
			{
				is_lucky[k]=i;
				++k;
				break;
			}
		}
		if(k==1001)
			break;
	}
	cin >> t;
	while(t--)
	{
		cin >> n;
		cout << is_lucky[n] << "\n";	
	}
}