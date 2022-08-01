
//Sa se citeasca un numar n intreg de la tastatura. Sa se contorizeze cate cifre sunt in numarul n si sa se afiseze numarul lor.
#include <iostream>

using namespace std;

int main ()
{
	int n;
	int ct=0;
	
	cin>>n;
	
	while(n>0)
	{
		
		n = n / 10;
		ct = ct + 1;
		
	}
	
	cout << "numarul de cifre este" << " " << ct;



return 0;

}