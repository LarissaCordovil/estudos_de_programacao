#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
	int numero;
	cout<<"Digite um número: ";
	cin>>numero;
	cout<<"A tabuada do número "<<numero<<" é: \n";
	
	for(int i = 0; i <= 10; ++i ) {
		cout<<numero<< "x" <<i<< "=" <<(numero * i)<<" \n";
	}
	 
	return 0;
}
