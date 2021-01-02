#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int g,b;
	while(1)
	{
		cin >> g;
		cin >> b;
		if(g==-1)
			break;
		if(!g)
		{
			if(!b)
			{
				cout << "0 \n";
				continue;
			}

			cout << b << "\n";
		}
		else if(!b)
			cout << g << "\n";
		else
		{
			if(g==max(g,b))
				cout << ceil((double)g/(double)(b+1)) << "\n";
			else
				cout << ceil((double)b/(double)(g+1)) << "\n";
		}
	}
}