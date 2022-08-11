#include <iostream>

using namespace std;

void f( int x, int y, int &z, bool cr)
{
	if( (x%2) * (y%2) !=0 ) 
	{
		z=1;

		cr = false; 
	}
	else 
	{ 
		
		f(x/2, y/2,z, cr = true);
		
		z=z+1;
	}
	
	cout << cr;
}

int main ()
{
	int x, y, z;
	bool cr;
	
	f(x,y,z,cr);
	
	cout << " Alege 2 numere :"; 
	
	cin >> x >> y;
	
	if( cr == 2)
	{
		cout << " perechea alesa respecta conditia: "<< f;
	}
	else
	{
		cout <<" perechea alesa nu respecta conditia: " << f;
	}
}