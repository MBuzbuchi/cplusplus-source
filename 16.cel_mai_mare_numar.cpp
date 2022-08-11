#include <iostream>
#include <limits>
using namespace std;

int main()
{

	int n;
	int x;//cea mai mare cifra
	int c;
	
	cin >> n;
	
	while (n>0)
	{
		c = n % 10;
		
		if( c > x )
		{
			x = c;
			cout << "cea mai mare cifra este:"<<endl;
		}
		
		n= n / 10;
		
	} 

	cout << x;

return 0;
}