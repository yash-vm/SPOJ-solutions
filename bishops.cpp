#include <bits/stdc++.h>
using namespace std;
string add(string s1, string s2)
{
	int carry=0,i,sum,s1l,s2l;
	string s3="";
	if(s2.length()>s1.length())
		swap(s1,s2);
	s1l=s1.length();
	s2l=s2.length();
	//cout << s1 << " " << s2 << endl;
	for(i=s1l-1;i>=s1l-s2l;--i)
	{
		sum=carry+(s1.at(i)-'0')+(s2.at(i-s1l+s2l)-'0');
		carry=sum/10;
		s3.push_back('0'+sum%10);
	}
	for(i=s1l-s2l-1;i>=0;--i)
	{
		sum=carry+(s1.at(i)-'0');
		carry=sum/10;
		s3.push_back('0'+sum%10);
	}
	if(carry)
		s3.push_back('0'+carry);
	reverse(s3.begin(),s3.end());
	return s3;
}
string mult(string s1,string s2)
{
	string s4="0";
	if(s2.length()>s1.length())
		swap(s1,s2);
	int i,m,j,carry=0;
	for(i=s2.length()-1;i>=0;--i)
	{
		carry=0;
		string s3="";
		int l=s2.length()-1-i;
		while(l--)
			s3.push_back('0');
		for(j=s1.length()-1;j>=0;--j)
		{
			m=(s2.at(i)-'0')*(s1.at(j)-'0')+carry;
			carry=m/10;
			s3.push_back(m%10+'0');
		}
		if(carry)
			s3.push_back(carry+'0');
		reverse(s3.begin(),s3.end());
		s4=add(s4,s3);
	}
	return s4;
}
string subtract(string s1, string s2)
{
	char c;
	string s3="";
	int i=0,dig,digcar,j;
	if(s2.length()>s1.length())
		swap(s1,s2);
	if(s2.length()==s1.length())
	{
		while(s2.at(i)==s1.at(i))
			++i;
		if(s2.at(i)>s1.at(i))
			swap(s1,s2);
	}
	
	//cout << s1 << " " << s2 << "\n";
	
	int s1l=s1.length();
	int s2l=s2.length();
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
	string s;
	while(1)
	{
		getline(cin,s);
		if(s=="")
			break;
		if(s=="1")
		{
			cout << "1" << "\n";
			continue; 
		}
		if(s=="0")
		{
			cout << "0" << "\n";
			continue;
		}
		cout << subtract(mult(s,"2"),"2") << "\n";
	}
}