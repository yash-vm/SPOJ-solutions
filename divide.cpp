#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int compare(string s1, string s2)
{
	int s1l=s1.length();
	int s2l=s2.length();
	if(s1l>s2l)
		return 1;
	if(s1l<s2l)
		return 0;
	for(int i=0;i<s1l;++i)
	{
		if(s1.at(i)>s2.at(i))
			return 1;
		if(s1.at(i)<s2.at(i))
			return 0;
	}
	return 2;	
}
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
string divquo(string s1,string s2)
{
	int c,i,j;
	if(compare(s2,s1))
		swap(s1,s2);
	int s1l=s1.length();
	int s2l=s2.length();
	j=s2l-1;
	string temp="";
	int templ=0;
	string quotient="";
	
	while(j<s1l)
	{
		//cout << j << "\n";
		for(i=j-s2l+1+templ;i<=j;++i)
		{
			temp.push_back(s1.at(i));
		}
		//cout << s2 << "\n";
		//cout << temp << "\n";
		//cout << compare(s2,temp) << "\n";
		if(temp=="0")
		{
			temp="";
			++j;
			quotient.push_back('0');
			continue;
		}
		if(compare(s2,temp)==1)
		{
			if(j<s1l-1)
			{
				++j;
				temp.push_back(s1.at(j));
			}
			else if(j==s1l-1)
			{
				quotient.push_back('0');
				break;
			}
		}
		c=1;

		temp=subtract(s2,temp);
		//cout << compare(s2,temp) << "\n";
		while(compare(temp,s2))
		{
			temp=subtract(temp,s2);
			++c;
		}
		//cout << temp << "\n";
		if(temp=="0")
		{
			temp="";
		}
		templ=temp.length();
		quotient.push_back((c+'0'));
		++j;
	}
	return quotient;
}
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	//cout << s1 << " " << s2 << "\n";
	cout << divquo(s1,s2) << "\n";
}