#include <iostream>
using namespace std;
 main() {
 	system ("chcp 65001");
 	
 	double num1, num2; //Declarei duas vari�veis que podem inclusive ser decimais
 	cout<<"Digite um n�mero: ";
 	cin>>num1;
	cout<<"Digite outro n�mero: ";
 	cin>>num2;
	 	 	
 	if ( num1 > num2 ) {
 		cout<<"O maior n�mero �: "<<num1;
	}
	else {
		cout<<"O maior n�mero �: "<<num2;
	}
 }
