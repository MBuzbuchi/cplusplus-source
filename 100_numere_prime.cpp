
// primele 100 de numere prime 

#include <iostream>


using namespace std;

int main()
{
	int i;
	int j;
	int ct=0;
	
		for( i=2; i < 100; i++ )
		{
			
			for( j=2; j <= i; j++ )
			{
				if( i%j==0)
				{
					break;
				}
				
			}
			
			if(i==j)
			{
				cout << " numerele prime pana la 100 sunt: " << i <<endl; 
				ct=ct+1;
				cout << " " << ct << endl;
			}

		}


return 0;
}