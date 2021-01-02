#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string n;
	getline(cin,n);
	while(n!="0")
	{
		int nsize=n.size();
		long long int dp[nsize+1]={0};
		int i=0;
		dp[0]=1;
		dp[1]=1;
		for(i=2;i<=nsize;++i)
		{
			int exp=(int)(n.at(i-2)-'0')*10+(int)(n.at(i-1)-'0');
			//cout << exp << "\n";
			if(n.at(i-1)!='0')
				dp[i]=dp[i-1];
			if(exp<=26&&exp>=10)
			{
				dp[i]+=dp[i-2];
			}
		}
		cout << dp[nsize] << "\n";
		getline(cin,n);
	}
}