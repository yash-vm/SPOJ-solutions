#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int i,n;
	while(1)
	{
		cin >> n;
		if(!n)
			break;
		i=n;
		int a[n];
		for(i=0;i<n;++i)
			cin >> a[i];
		while(i--)
		{
			if(a[a[i]-1]!=i+1)
			{
				cout << "not ambiguous \n";
				break;
			}
		}
		if(i==-1)
			cout << "ambiguous \n";
	}
}