#include <iostream>

using namespace std;
bool isOdd(int n) 
{ 
    // n&1 is 1, then odd, else even 
    return ((n & 1)); 
} 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y,s;
		cin >> x;
		cin >> y;
		s=x-y;
		if(s==0)
		{
			if(isOdd(x))
				cout << x+y-1 << "\n";
			else
				cout << x+y << "\n";
		}
		else if(s==2)
		{
			if(isOdd(x))
				cout << x+y-1 << "\n";
			else
				cout << x+y << "\n";
		}
		else
			cout << "No Number" << "\n";
	}

}