//14.Sa se citeasca un numar intreg de la tastatura. Sa se calculeze suma cifrelor numarului intreg si sa se afiseze rezultatul.

#include <iostream>

using namespace std;

int main()
{
	int n;
	int s=0;
	int r;
	
	cin >> n;
	
	while(n>0)
	{
		r = n % 10;
		
		
		cout << "numarul este: " << n <<endl;
		
		n = n / 10;
		
		cout <<"numarul este: " << n << endl;
		cout << "*" << endl;
		
		s = s + r;
	}
	
	cout << s;


return 0;
}
