#include <iostream>
using namespace std;

int breaker(int n)
{
	int s=0;
	while(n)
	{
		s+=(n%10)*(n%10);
		n/=10;
	}
	return s;
}
int counter(int count,int x, int lv[],int globcount[])
{
	int s,sumsqdig=0,i,flag=0,tempx;
	int count2=count;
	tempx=x;
	int gcx=globcount[x];
	if(x>198)
	{
		while(tempx)
		{
			sumsqdig+=tempx%10;
			tempx/=10;
		}
		if(sumsqdig==1)
			return 2;
		else
			counter(count+1,sumsqdig,lv,globcount); //sumsqdig
	}
	else
	{
	if(gcx)
	{
		return gcx+count;
	}
	if(x==1||x==10||x==100)
	{
		count2+=globcount[x];
		return count2;
	}
	else
	{
		++count2;
		s=breaker(x);
		lv[count]=x;
		for(i=0;lv[i]!=0;++i)
		{
			if(s==lv[i])
			{
				flag=1;
				break;
			}		
		}
		if(flag)
		{
			for(i=0;lv[i]!=0;++i)
			{
				globcount[lv[i]]=-1;
			}
			globcount[s]=-1;
			return -1;
		}
		else
		{
			counter(count2,s,lv,globcount); //s
		}
	}
	}
}
int main()
{
	int newc,count,n=0,t;
	int globcount[1000]={0};
	globcount[1]=1;
	globcount[10]=2;
	globcount[100]=2;
	cin >> t;
	while(t--)
	{
		int lv[1000]={0};
		count=0;
		cin >> n;
		newc=counter(count,n,lv,globcount);//0
		globcount[n]=newc-1;
		cout << globcount[n] << "\n";
	}
}