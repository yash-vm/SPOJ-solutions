#include <iostream>

using namespace std;

int main()
{
	int a[100000];
	int num,i=0,j=0;
	do
	{
		cin >> num;
		a[i++]=num;
	}
	while(num!=42);
	while(j<i-1)
		cout << a[j++] << "\n";

}