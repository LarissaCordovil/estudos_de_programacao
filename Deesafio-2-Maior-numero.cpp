#include <iostream>
using namespace std;
 main() {
 	system ("chcp 65001");
 	
 	int num1, num2; 
 	cout<<"Digite um número inteiro: "; 
 	cin>>num1;
	cout<<"Digite outro número inteiro: ";
 	cin>>num2;
	 	 	
 	if ( num1 > num2 ) {
 		cout<<"O maior número é: "<<num1;
	}
	else {
		cout<<"O maior número é: "<<num2;
	}
 }
