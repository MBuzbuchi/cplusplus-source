#include <iostream>

using namespace std;

int main()
{
	
	int a;
	int b;
	int c;
	
	cin >> a >> b >> c;
	
	if ( a < b)
	{
		if ( a < c)
		{
			cout << a << " "<< "primul numar este cel mai mic";
		}
		else
		{
			cout << c << " " << "ultimul numar este cel mai mic";
		}
	}
		
		
		else
		{
			if ( b < c)
			{
				cout << b << " " << "al doilea numar este cel mai mic";
			}
			else
			{
				cout << c << " "<< "al doilea numar este cel mai mic";
			}
		}
	





return 0;


}