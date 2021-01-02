#include <iostream>
using namespace std;
int main()
{
	long int n,n1;
	int k;
	cin >> n;
	n1=n;
	k=n%10;
	if(k)
		cout << "1 \n" <<  k << "\n";
	else
	{
		while(!k)
		{
			n1/=10;
			k=n1%10;
		}
		cout <<"2 \n" ; 
	}
}