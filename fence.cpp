#include <iostream>
using namespace std;
int main()
{
	int l;
	double a;
	while(1)
	{
		cin >> l;
		if(!l)
			break;
		a=(double)(l*l)/(2*3.141592653589793238462643383279502884);
		printf("%0.2f \n", a);
	}
}