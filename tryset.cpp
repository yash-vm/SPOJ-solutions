#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
	set <int, greater <int> > friends;
	set <int, greater <int> > friendslist;
	set <int, greater <int> > :: iterator itr;
	int i,j,f,c=0;
	cin >> f;
	for(i=0;i<f;++i)
	{
		int id1,numf,id2;
		cin >> id1;
		friends.insert(id1);
		cin >> numf;
		for(j=0;j<numf;++j)
		{
			cin >> id2;
			friendslist.insert(id2);
		}
	}
	for(itr=friendslist.begin();itr!=friendslist.end();++itr)
	{
		i=friends.count(*itr);
		if(!i)
		{
			++c;
		}
	}
	cout << c << "\n";
}