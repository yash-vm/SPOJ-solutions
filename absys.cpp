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
	ios_base::sync_with_stdio(false);
	int t,i,flag1,flag2,flag3,num1size,num2size,num3size,insize;
	cin >> t;
	string blank;
	getline(cin,blank);
	
	while(t--)
	{
		getline(cin,blank);
		i=0;
		flag1=0;
		flag2=0;
		flag3=0;
		string in,num1,num2,num3;
		getline(cin,in);
		//cout << in << "\n";
		
		insize=in.size();
		char c=in.at(i);
		//cout << insize << " " << c << "\n";
		
		while(c!='+')
		{
			c=in.at(i);
			num1.push_back(c);
			//cout << num1 << "\n";
			++i;
		}
		
		++i;
		//cout << num1;
		
		while(c!='=')
		{
			c=in.at(i);
			num2.push_back(c);
			++i;
		}
		//cout << num2 << "\n";
		++i;
		while(i<=insize-1)
		{
			c=in.at(i);
			num3.push_back(c);
			++i;
		}
		//cout << num3 << "\n";
		
		num1.pop_back();
		num1.pop_back();
		num2.pop_back();
		num2.pop_back();
		//cout << num1 << " " << num2 << " " << num3 << "\n";
		
		i=0;
		num1size=num1.size();
		num2size=num2.size();
		num3size=num3.size();
		while(i<num1size)
		{
			//cout << i << "\n";
			if(num1.at(i)=='m')
			{
				flag1=1;
				break;
			}
			++i;
		}
		
		i=0;
		if(!flag1)
		{
			while(i<num2size)
			{
				//cout << i << "\n";
				if(num2.at(i)=='m')
				{
					flag2=1;
					break;
				}
				++i;
			}
		}
		
		if(!flag1&&!flag2)
		{
			//cout << "hello \n";
			flag3=1;
			num3=add(num1,num2);
		}
		
		if(!flag3)
		{
			//cout << flag1 << " " << flag2 << "\n";
			
			if(!flag1)
			{
				num2=subtract(num3,num1);
			}
			else 
			{
				num1=subtract(num3,num2);
			}
		}
		
		cout << num1 << " + " << num2 << " = " << num3 << "\n";
		
	}
}