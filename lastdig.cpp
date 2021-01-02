#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,n,s,i,c=1,fd;
		cin >> a;
		cin >> n;
		b=a%10;
		fd=b;
		int d[10]={0};
		d[b]=c;
		++c;
		b*=b;
		if(n==0)
		{
			cout << "1" << "\n";
			continue;
		}
		if(b==0)
			cout << "0" << "\n";
		else
		{
			while(!d[b%10])
			{
				d[b%10]=c;
				++c;
				b*=fd;
			}
			if(c==2)
			{
				cout << fd << "\n";
				continue;
			}
			
			s=(n%(c-1));
			
			if(s)
			{
				for(i=0;i<10;++i)
				{
					if(d[i]==s)
						break;
				}
				cout << i << "\n";
			}
			else
			{
				for(i=0;i<10;++i)
				{
					if(d[i]==c-1)
						break;
				}
				cout << i << "\n";
			}
		}	

	}
}