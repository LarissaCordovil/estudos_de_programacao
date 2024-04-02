#include <iostream>
using namespace std;
 main() {
 	system ("chcp 65001");
 	
 	double num1, num2; //Declarei duas variáveis que podem inclusive ser decimais
 	cout<<"Digite um número: ";
 	cin>>num1;
	cout<<"Digite outro número: ";
 	cin>>num2;
	 	 	
 	if ( num1 > num2 ) {
 		cout<<"O maior número é: "<<num1;
	}
	else {
		cout<<"O maior número é: "<<num2;
	}
 }
