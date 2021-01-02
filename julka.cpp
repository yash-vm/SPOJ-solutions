#include <iostream>
#include <string>
#include <algorithm>
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
/*
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
*/
string divby2(string s)
{
	string ans;
	int j=1,i,temp=s.at(0)-'0',sl,c;
	if(temp==1)
	{
		temp=temp*10+(s.at(1)-'0');
		j=2;
	}
	sl=s.length();
	for(i=j;i<sl;++i)
	{
		temp=temp>>1;
		ans.push_back(temp+'0');
		c=s.at(i)-'0';
		temp=(temp&1)*10+c;
	}
	return ans;
}
int main()
{
	string s="10872107";
	cout << divby2(s) << "\n";
	/*string s1;
	string s2;
	int t=10;
	while(t--)
	{
		getline(cin,s1);
		getline(cin,s2);
		string kl=divquo(add(s1,s2),"2");
		string nat=subtract(s1,kl);
		cout << kl << "\n" << nat << "\n";
	}*/
}