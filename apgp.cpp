#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
    while(1)
    {
        cin >> a >> b >> c;
        if(!a&&!b&&!c)
            break;
        if(2*b==a+c)
        {
            cout << "AP " << c+b-a <<"\n";
            continue;
        }
        else
            cout << "GP " << c*(b/a) <<"\n" ;
    }
}