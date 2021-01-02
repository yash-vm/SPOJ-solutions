#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,x,c,e,flag;
	while(1)
	{
		c=0;
		flag=0;
		stack <int> s;
		cin >> x;
		if(x==0)
			break;
		int a[x+1];
		for(i=1;i<=x;++i)
			cin >> a[i];
		for(i=1;i<=x;++i)
		{
			c=s.size();
			if(a[i]!=i-c)
				s.push(a[i]);
			e=a[i]+1;
			if(!(s.empty()))
			{
				while(s.top()==e)
				{
					if(i==x)
						flag=1;
					e=s.top()+1;
					s.pop();
					if(s.empty())
						break;
				}
			}
		}
		if(s.empty())
			cout << "yes \n";
		else
			cout << "no \n";
	}
}