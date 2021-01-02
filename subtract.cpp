#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string subtract(string s1, string s2)
{
	int flag=0;
	char c;
	int s1l=s1.length();
	int s2l=s2.length();
	string s3="";
	int i=0,dig,digcar,j;
	if(s2l>s1l)
		swap(s1,s2);
	if(s2l==s1l)
	{
		while(s2.at(i)==s1.at(i))
		{
			++i;
			if(i==s2l)
			{
				flag=1;
				break;
			}
		}
		if(i<s1l)
		{
			if(s2.at(i)>s1.at(i))
				swap(s1,s2);
		}
	}
	if(flag==1)
	{
		return "0";
	}
	//cout << s1 << " " << s2 << "\n";
	
	s1l=s1.length();
	s2l=s2.length();
	for(i=s1l-1;i>=s1l-s2l;--i)
	{
		//cout << i << "\n";
		dig=s1.at(i)-s2.at(i-s1l+s2l);
		if(dig>=0)
		{
			c=dig+'0';
		}
		else
		{
			j=i-1;
			while(s1.at(j)=='0')
			{
				--j;
			}
			//digcar=s1.at(j)-'0'-1;
			s1.at(j)=s1.at(j)-1;
			++j;
			while(s1.at(j)=='0'&&j!=i)
			{
				s1.at(j)='9';
				++j;
			}
			c=(dig+10)+'0';
		}
		s3.push_back(c);
	}
	//cout << s3 << "\n";
	
	for(j=0;j<s1.length()-s2.length();++j)
	{
		if(s1.at(j)!='0')
			break;
	}
	for(i=s1.length()-s2.length()-1;i>=j;--i)
		s3.push_back(s1.at(i));
	int s3l=s3.length();
	for(i=s3l-1;i>0;--i)
	{
		if(s3.at(i)=='0')
			s3.pop_back();
		else
			break;
	}
	reverse(s3.begin(),s3.end());
	//cout << s3 << "\n";
	return s3; 
}
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	//cout << s1 << " " << s2 << "\n";
	cout << subtract(s1,s2) << "\n" ;
}