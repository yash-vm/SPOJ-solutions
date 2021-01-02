#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;
	string a;
	unsigned long long int b,bc;
	int ld,d;
	cin >> t;
	getline(cin,a);
	while(t--)
	{
		int dig[10]={0};
		cin >> a >> b;
		d=a.at(a.length()-1)-'0';
		if(b==0)
		{
			cout << "1 \n";
			continue;
		}
		ld=1;
		int c=1;
		bc=b;	
		while(bc!=0)
		{
			ld*=d;
			ld=ld%10;
			if(dig[ld])
			{
				break;
			}
			dig[ld]=c;
			++c;
			--bc;
		}
		int j=b%(c-1);
		if(j)
		{
			for(i=0;i<10;++i)
			{
				if(dig[i]==j)
				{
					cout << i << "\n";
					break;
				}
			}
		}
		else
		{
			for(i=0;i<10;++i)
			{
				if(dig[i]==c-1)
				{
					cout << i << "\n";
					break;
				}
			}
		}
	}
}