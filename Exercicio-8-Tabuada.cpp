#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
	int numero;
	cout<<"Digite um n�mero: ";
	cin>>numero;
	cout<<"A tabuada do n�mero "<<numero<<" �: \n";
	
	for(int i = 0; i <= 10; ++i ) {
		cout<<numero<< "x" <<i<< "=" <<(numero * i)<<" \n";
	}
	 
	return 0;
}
