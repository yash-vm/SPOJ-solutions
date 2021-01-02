#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int i,n,l,c=1,j;
	do
	{
		cin >> n;
		if(!n)
			break;
		char s[200];
		cin >> s;
		l=strlen(s);
		for(i=0;i<n;++i)
		{
			c=1;
			j=i;
			cout << s[j];
			while(1)
			{
				if(!(j<l&&j>=(l-n)))
				{
					if(c)
					{
						j+=2*(n-i)-1;
						cout << s[j];
						c=0;
					}
					else
					{
						j+=2*i+1;
						cout << s[j];
						c=1;

					}
				}
				else
					break;
			}
		}
		cout << "\n";
	}
	while(1);
}