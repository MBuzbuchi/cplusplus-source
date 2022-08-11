#include<iostream>

using namespace std;

int main()
{
	int j;
	int n;
	int s=0;
	 
	cin >>n;
		
	for( int j=2; j<=n; j++ )
	{
		s=s+j;
	}
	 
	cout<<s;


	return 0;
}