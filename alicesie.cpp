#include<bits/stdc++.h> 

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	if(n&1)
		cout << (n+1)/2 << "\n";
	else
		cout << n/2 << "\n";
}

}