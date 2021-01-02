#include<bits/stdc++.h> 

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
	int n1,n;
	cin >> n1;
	cin >> n;
	vector<char> is_prime((n+1), true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 3; i*i <= n; i+=2) {
	  	 if (is_prime[i]) {
     	    for (int j = i * i; j <= n; j += i)
        	    is_prime[j] = false;
    }
	}
	if(n1%2)
	{
		if(n1<=2)
			cout << "2" << "\n";
		for(int i=n1;i<=n;i+=2)
		{
			if(is_prime[i]==true)
				cout << i << "\n";
		}
	}
	else
	{
		if(n1<=2)
			cout << "2" << "\n";
		for(int i=n1+1;i<=n;i+=2)
		{
			if(is_prime[i]==true)
				cout << i << "\n";
		}	
	}
	cout << "\n";

}

}