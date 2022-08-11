#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x,y,z;
	double m,n,p;
	float b;
	char lit1 = 'T';
	char lit2 = 'M';
	string momentimpact= "Ouch!";
	string reactieb4impact= " Ce frumoasa e viata!";
	bool pana= true; 
	const string mesaj= "Evrika";
	
	//imput de la user;
	
	cout << "Numerele dumneavoastra sunt ?\n";
	
	//definirea datelor folosite
	
	cin >> x >> y >> m >> n >> p;
	
	cout << "Uite un truc magic:"<<endl;
	
	//operatori aritmetici
	
	cout << ++x << " \n" << --x << endl;
	
	//operatori de atribuire
	x+=6;
	cout << x << endl;
	
	x*=5;
	cout << x <<endl;
	
	y/=6;
	cout << y <<endl;
	
	y-=4;
	cout << y <<endl;
	
	
	//operatori de comparatie
	cout << ( x > y ) << endl;
	cout << ( x == y ) << endl;
	cout << ( x != y ) << endl;
	
	//operatori logici
	cout<<(x<10 && y>2) << endl;
	cout<<(x>4 || y>46) << endl;

	//calcule cu operatori 
	
	cout<< x << " " << y << endl;
	
	z=x+y;
	cout << z << endl;
	
	z=x*y;
	cout << z << endl;
	
	z=x/y;
	cout << z << endl;
	
	n=m/p;
	cout << n << endl;
	
	//utilizari stringuri
	cout << reactieb4impact + momentimpact<<endl;
	
	cout << reactieb4impact << " " << momentimpact<<endl;
	
	cout << reactieb4impact.size()<<endl;
	
	cout << reactieb4impact[3]<<endl;
	
	//caractere
	cout << lit1 << " " << lit2 <<endl;
	
	//bool
	
	cout<< pana << endl;
	
	// spatii sau linii noi
	cout << "Hai sa mergem";
	cout << "la piata" << endl;
	
	cout << "Hai sa mergem\n";
	cout << "la piata" << endl;
	
	cout << "Hai sa mergem\t";
	cout << "la piata" << endl;
	
	cout << "Hai sa mergem\\";
	cout << "la piata" << endl;
	
	cout << "Hai sa mergem \t";
	cout << " \"la piata\" " << endl;
	
	//constanta
	cout<< mesaj << endl;
	
	
	
	return 0;
}