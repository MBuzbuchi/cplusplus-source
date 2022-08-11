// primele 100 de numere prime

#include <iostream>

using namespace std;

int main()
{

	int n=2; 
	int i;
	int nrprime;
	int ct=0;
	bool c;
	
	cin >> nrprime;
	
	while ( nrprime )
	{
		c=true;
		
		for( i=2; i<=n/2; i++ )
		{
			if( n%i == 0 )
			{
				c=false;
				break;
			}
		}
		
		if( c==true )
		{
			cout << "primele 100 de numere prime sunt: " << n << endl;
			
			nrprime--;// se elimina valorile care nu sunt prime
			
			ct=ct+1;
			
			cout << " " << ct << endl;
		}
		
		n++;// se verifica daca primul n este impar
		
	}


return  0;
}