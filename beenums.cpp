#include <iostream>
using namespace std;
int main()
{
	int i,s,n;
	while(1)
	{
		i=0;
		scanf("%d",&n);
		if(n==-1)
			break;
		while(1)
		{
			s=3*(i)*(i+1)+1;
			if(3*(i)*(i+1)+1==n)
			{
				printf("Y \n");
				break;
			}
			else if(s>n)
			{
				printf("N \n");
				break;
			}
			++i;
		}
	}
}