#include <iostream>

using namespace std;

void bubbleSort(int matrice[])
{
	int n = 7;
	
	int t = 0;
	
	int runda=0;
	
	bool opt;
	
	// 1+2+3..+n = n*(n+1)/2
	
	for ( int i = 0; i < n-1; i++ )
	{
		runda ++;
		
		opt = false;
		
		for( int j = 0; j < (n-i-1); j++)
		{
			if( matrice[j] > matrice[j+1] )
			{
			    opt = true;
			    
				t = matrice[j];
				
				matrice[j] = matrice[j+1];
				
				matrice[j+1] = t;
				
			}
		}
		
		if(opt == false)
		{
		    break;
		}
	}
	
	cout << " numarul de runde este: " << runda << endl;
}

int main()
{
	int matrice[]={80, 35, 59, 68, 97, 22, 74};
	
	cout << "matricea inainte de bubblesort: ";
	
	for( int i = 0; i <= 6; i++ )
	{
		if(i<6)
		{
		cout << matrice[i] <<" , "; 
		}
		
		else 
		{
			cout << matrice[i] <<".";
		}
	}
	
	bubbleSort(matrice);
	
	cout << " \n ";
	
	cout << "matricea dupa de bubblesort: ";
	

	for( int i = 0; i <= 6; i++ )
	{
		if(i<6)
		{
			cout << matrice[i] <<" , "; 
		}
		
		else 
		{
			cout << matrice[i] <<".";
		}
	}
	
 return 0;
}