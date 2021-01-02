#include <iostream>
using namespace std;
int main()
{
	int t,h,a,i;
	cin >> t;
	while(t--)
	{
		cin >> h >> a;
		i=0;
		while(1)
		{
			if(!(i&1))
			{
				++i;
				h+=3;
				a+=2;
				continue;
			}
			else
			{
				if(a<=10)
				{
					h-=20;
					a+=5;
					++i;
				}
				else
				{
					h-=5;
					a-=10;
					++i;
				}
			}
			if(a<=0||h<=0)
			{
				break;
			}
		}
		cout << i-1 << "\n";
	}
}