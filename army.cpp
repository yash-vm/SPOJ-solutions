#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int ng,i,nm,t,maxa,maxb;
	cin >> t;
	while(t--)
	{
		maxa=0;
		maxb=0;
		cin >> ng >> nm;
		int a[ng];
		int b[nm];
		for(i=0;i<ng;++i)
		{
			cin >> a[i];
			if(a[i]>maxa)
				maxa=a[i];
		}
		for(i=0;i<nm;++i)
		{
			cin >> b[i];
			if(b[i]>maxb)
				maxb=b[i];
		}
		if(maxa==maxb)
			cout << "Godzilla \n";
		else
		{
			if(maxa>maxb)
				cout << "Godzilla \n";
			else
				cout << "MechaGodzilla \n";
		}
	}
}