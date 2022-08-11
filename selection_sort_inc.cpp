#include <iostream>

using namespace std;

void selectionsort( int matrice [])
{
	int n = 7;
	int index;
	int cmmc; // cel mai mic numar
	
	for( int i = 0; i < n-1; i++)
	{
		index = i;
		
		for( int j = i + 1; j < n; j++)
		{
			if( matrice[j] > matrice [index])
			{
				
				index = j;
				
			}
			
		}
		
		cmmc = matrice[index];
		
		matrice[index] = matrice [i];
		
		matrice[i] = cmmc;
	
	for( int i=0; i <= 6; i++)
	{
		if( i < 6)
		{
			cout << matrice[i] << "_";
		}
		
		else
		{
			cout << matrice[i] << " ";
		}
	}
	
	cout << endl << endl;
	
	}
	
	
}

int main()
{
	int matrice[]= {90, 68, 70, 33, 89, 17, 46};
	
	cout << " martrice inainte de sortare: " << endl;
	
	for( int i = 0; i <= 6; i++)
	{
		if( i < 6)
		{
			cout << matrice[i] << "_";
		}
		
		else
		{
			cout << matrice[i] << " ";
		}
	}
	
	cout << endl;
	
	selectionsort(matrice);
	
	cout << " \n ";
	
	cout << "matricea dupa sortare este: " << endl;
	
	for( int i = 0; i <= 6; i++)
	{
		if( i < 6)
		{
			cout << matrice[i] << "_";
		}
		
		else
		{
			cout << matrice[i] << " ";
		}
	}


return 0;	
}