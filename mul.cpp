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
string karatsuba()
{
	int m=min(s1.length(),s2.length());
	int m2=(m/2);
	string high1=s1.substr(0,m2);
	string low1=s1.substr(m2+1,s1.length()-1);
	string high2=s2.substr(0,m2);
	string low2=s2.substr(m2+1,s2.length()-1);
	string z0=karatsuba(low1,low2);
	string z1=karatsuba(add(low1,high1),add(low2,high2));
	string z2=karatsuba(low1,low2);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1,s2;
		cin >> s1 >> s2;

		cout << mult(s1,s2) << endl;
	}
}