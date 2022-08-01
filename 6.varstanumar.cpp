#include <iostream>

using namespace std;

int main()
{

	float v=0;
	
	cin >> v;
	
	if ( v < 4 )
	{
		cout << "bebelus";
	}
	else if ( v < 7 )
	{
		cout << "prescolar" ;
	} 
	else if( v < 19 )
	{
		cout << "elev" ;
	}
	else 
	{
		cout << "adult";
		
	}

return 0;
}