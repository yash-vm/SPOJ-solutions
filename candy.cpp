#include <iostream>
using namespace std;
int main()
{
	int n,i,m,s=0,c=0;
	while(1)
	{
		cin >> n;
		if(n==-1)
			break;
		int a[n];
		for(i=0;i<n;++i)
		{
			cin >> a[i];
			s+=a[i];
		}
		if(!(s%n))
		{
			m=s/n;
			for(i=0;i<n;++i)
			{
				if(a[i]<m)
					c+=(m-a[i]);
			}
			cout << c << "\n";
		}	
		else
			cout << "-1 \n";
		s=0;
		c=0;
	}
}