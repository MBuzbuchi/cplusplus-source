
//Sa se citeasca un numar intreg de la tastatura. Sa se afle cate numere prime sunt in cifrele numarului intreg si sa se afiseze rezultatul.
#include <iostream>


using namespace std;


int main()
{
	
	int n;
	int ct=0;
	int r;
	bool prim;
	
	cin >> n;
	
	while(n>0)
	{
		r = n % 10;
		cout << r << endl;
		
		prim = true;
		
		if( r == 0 || r == 1 )
		{
			prim = false;	
		}
		else 
		{
			for(int i=2 ; i <= r/2; i++)
			{
				if( r % i == 0 )
				{
					prim = false;
					cout << "numarul nu este prim "<<endl;
					break;
				}
			}
		}
		if(prim==true) ct=ct+1;
		
		n = n / 10;
		
	}


	cout << "numarul numerelor prime este" << " " << ct;




return 0;
}