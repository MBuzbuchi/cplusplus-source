//Sa se calculeze suma = 1 + 3/1*2 + 5/(1*2*3) +...+ (2n-1)/1*2*3*...*n. Sa se afiseze suma.

#include <iostream>

using namespace std;

int main()
{
	int n;
	float s=0;
	
	
	
	cin>>n;
	
	for( int i=1; i<=n; i++)
	{
		int p=1;
		
		for( int j=1; j<=i; j++)
		{
			p=p*j;
			cout << "valoarea lui p este: "<< p <<endl; 
		}
		
		s=s+(float)(2*i-1)/p;
		
		cout << "valoarea lui s este: " << s <<endl;
		
		
		
	}
	
	cout << s << " " << "suma sirului";
	

return 0;
}