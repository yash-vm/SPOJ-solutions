#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int t;
	cin >> t;
	//string blank;
	//getline(cin,blank);
	while(t--)
	{
		char a[100000];
		char b[100000];
		scanf("%s",a);
		scanf("%s",b);
		if(strlen(b)>strlen(a))
		{
		int tempcost,min=2147483647;
		int cost=strlen(b)-strlen(a);
		int i,j;
		for(i=0;i<strlen(b)-strlen(a);++i)
		{
			tempcost=0;
			for(j=0;j<strlen(a);++j)
			{
				if(b[(i+j)]!=a[(j)])
					++tempcost;
			}
			if(min>tempcost)
				min=tempcost;
		}
		cout << min+cost << "\n";
	}
		else
		{
		int tempcost,min=2147483647;
		int cost=strlen(a)-strlen(b);
		int i,j;
		for(i=0;i<=strlen(a)-strlen(b);++i)
		{
			tempcost=0;
			for(j=0;j<strlen(b);++j)
			{
				if(a[(i+j)]!=b[(j)])
					++tempcost;
			}
			if(min>tempcost)
				min=tempcost;
			//cout << min << "\n";
		}
		cout << min+cost << "\n";
		}
	}
}