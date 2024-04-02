#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
	double num1, num2; // declarando duas variáveis do tipo double para que eu consiga digitar números inteiros ou decimais
	cout<<"Digite um número real: ";
	cin>>num1;
	cout<<"Digite outro número real: ";
	cin>>num2;
	cout<<"O resultado da soma é: "<<num1 + num2<<"\n\n";
}
