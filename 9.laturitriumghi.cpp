#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	
	cin >> a >> b >> c;
	
	if (a<b+c && b<a+c && c<a+b)
	{
	
		cout << "DA";
	
	}
		else
		{
			cout << "NU";
		}



return 0;

}