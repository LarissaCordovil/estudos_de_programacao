#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
	double num1, num2; // declarando duas vari�veis do tipo double para que eu consiga digitar n�meros inteiros ou decimais
	cout<<"Digite um n�mero real: ";
	cin>>num1;
	cout<<"Digite outro n�mero real: ";
	cin>>num2;
	cout<<"O resultado da soma �: "<<num1 + num2<<"\n\n";
}
