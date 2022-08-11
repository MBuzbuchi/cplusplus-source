//Sa se citeasca un numar intreg de la tastatura. Sa se afle daca este numar prim si sa se afiseze DA sau NU.

#include <iostream>

using namespace std;

int main()
{
	int nr;
	bool prim = true;
	
	cin>>nr;
	
	for(int i=2; i < nr; i++) //i are valoarea 2 deoarece este primul numar prim //se imparte nr la 2 ???
	{
		if(nr%i==0)
		{
			prim = false;
		}
			
	break;
		
	}
	
	if( prim )
	{
		cout << nr << " " << "numarul este prim";
	}
		else
		{
			cout << nr << " " << "numarul nu este prim";
		}

return 0;
}