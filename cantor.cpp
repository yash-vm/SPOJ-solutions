#include <iostream>
using namespace std;
int main()
{
	int d,i,t,n,num,den;
	cin >> t;
	while(t--)
	{
		cin >> n;
		i=1;
		while(((i*(i-1))/2)+1<=n)
			++i;
		d=n-1-((i-2)*(i-1))/2;
		num=(d+1);
		den=(i-d-1);
		if(i&1)
		{
			cout << "TERM " << n << " IS " << num << "/" << den << "\n";
		}
		else
		{
			cout << "TERM " << n << " IS " << den << "/" << num << "\n";	
		}

	}
}