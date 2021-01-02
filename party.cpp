#include <bits/stdc++.h>
using namespace std;
int main()
{
	float arr[100];
	int i=0;
	while(1)
	{
		cin >> arr[i] >> arr2[i];
		++i;
		if(arr[i]==0&&arr2[i]==0)
			break;
	}
	sort(arr,arr+4);
	for(int i=0;i<4;++i)
		cout << arr[i] << "\n";
}