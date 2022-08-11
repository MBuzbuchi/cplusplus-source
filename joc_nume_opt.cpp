#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main ()
{
	HANDLE x= GetStdHandle(STD_OUTPUT_HANDLE);
	int ct=0;
	string litera;
	
	cout << " Hai sa jucam un joc! ";
	
	cout << " Scrie o serie de litere, cu cat mai multe cu atat mai bine: ";
	
	getline( cin,litera );
	
	if( litera.length() == 100 )
	{
	    cout << "\n" << " Victorie! Ai scris 100 de numere "<< endl;
	}
	
	else if( litera.length() == 200 )
	{
	    cout << "\n" << " Victorie! Ai scris 200 de numere "<< endl;
	}
	
	else if( litera.length() == 300 )
	{
	    cout << "\n" << " Victorie! Ai scris 300 de numere "<< endl;
	}
    
	else if( litera.length() == 400 )
	{
	    cout << "\n" << " Victorie! Ai scris 400 de numere "<< endl;
	}
	
	else if( litera.length() == 500 )
	{
	    cout << "\n" << " Victorie! Ai scris 500 de numere "<< endl;
		ct=ct+1;
		cout << "\n" << " " << ct << "PC" << " \n \n " << "Felicitari ai castigat 1 punct parsec ceea ce semnaleaza ca ai ajuns la mijlocul jocului" << endl;
	}
	
	else if( litera.length() == 600 )
	{
		ct=ct+1;
		cout << "\n" << ct <<  "PC" << " \n \n ";
	    cout << "\n" << " Victorie! Ai scris 600 de numere "<< endl;
	}
	
	else if( litera.length() == 700 )
	{
		ct=ct+1;
		cout << " " << ct <<  "PC" << " \n \n ";
	    cout << "\n" << " Victorie! Ai scris 700 de numere "<< endl;
	}
	
	else if( litera.length() == 800 )
	{
		ct=ct+1;
		cout << "\n" << ct <<  "PC" << " \n \n ";
	    cout << "\n" << " Victorie! Ai scris 800 de numere "<< endl;
	}
	
	else if( litera.length() == 900)
	{
		ct=ct+1;
		cout << "\n" << ct <<  "PC" << " \n \n ";
	    cout <<"\n" << " Victorie! Ai scris 900 de numere "<< endl;
	}
	
	else if( litera.length() == 1000)
	{
	    cout << "\n" << " Victorie! Ai scris 1000 de numere "<< endl;
		ct=ct+2;
		cout << "\n" << " " << ct << "PC " << " \n \n " << "Felicitari ai castigat 2 puncte parsec" << "\n\n";
		SetConsoleTextAttribute(x,12);
		cout << " FINALUL JOCULUI " << endl;
	}
	
	 else if (litera.length() > 1000)
	{
		cout << "\n" << "Numarul de cifre este prea mare";
		return 0;
	}
	
    else 
    {
        cout << " numarul de litere scris este "<< litera.length();
    }

	SetConsoleTextAttribute(x,7);
return 0;
}