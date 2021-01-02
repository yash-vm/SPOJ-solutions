#include <iostream>
using namespace std;
int main()
{
	int ans=0,n,in;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&in);
		ans^=in;
	}
	printf("%d",ans);
}