#include <iostream>
using namespace std;

main() {
	
	system ("chcp 65001");
	
	double base, altura;
    
    cout << "Digite o valor da base do triângulo: ";
    cin>>base;
    cout << "Digite o valor da altura do triângulo: ";
    cin>>altura;
    
    double area = (base * altura) / 2;
    cout << "A área do triângulo é: " << area;

}
