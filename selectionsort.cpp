#include <iostream>
using namespace std;

void selectionSort(int matrice[]) {
		
	int n = 7;
	int index;
	int celmaimic;
	
	for ( int i = 0; i < n-1; i++) {
		
		index = i;
		
		for ( int j = i + 1; j < n; j++) 
		{
			
			if ( matrice[j] < matrice[index]) 
			{
				
				index = j;
				
			}
		}
		
		celmaimic = matrice[index];
		matrice[index] = matrice[i];
		matrice[i] = celmaimic;
		
		for ( int i = 0; i <= 6; i++) {
			
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
		
		//declaratie
		int matrice[] = {90, 68, 70, 33, 89, 17, 46};

		cout << "Matricea inainte de Selectionsort este: " << endl;
		
		for ( int i = 0; i <= 6; i++) {
			
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
		
		selectionSort(matrice);
		
		
       	cout << "Matricea dupa Selectionsort este: " << endl;
		
			
		for ( int i = 0; i <= 6; i++) {
			
			if( i < 6)
		{
			cout << matrice[i] << "_";
		}
		
		else
		{
			cout << matrice[i] << " ";
		}
			
		}
		
}