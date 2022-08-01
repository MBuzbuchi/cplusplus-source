#include <iostream>

using namespace std;

void bubbleSort(int matrice[])
{
	int n = 6;
	
	int t = 0;
	
	int runda=0;
	
	for ( int i = 0; i <= n; i++ )
	{
		runda ++;
		
		for( int j = 1; j <= n; j++)
		{
			if( matrice[j-1] > matrice[j] )
			{
				t = matrice[j-1];
				
				matrice[j-1] = matrice[j];
				
				matrice[j] = t;
				
			}
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
		cout << matrice[i] <<" , "; 
	}
	
	bubbleSort(matrice);
	
	cout << " \n ";
	
	cout << "matricea dupa de bubblesort: ";
	

	for( int i = 0; i <= 6; i++ )
	{
		cout << matrice[i] << " , ";
	}
	
 return 0;
}