#include <iostream>
using namespace std;

main() {
	
	system ("chcp 65001");
	
	double base, altura;
    
    cout << "Digite o valor da base do tri�ngulo: ";
    cin>>base;
    cout << "Digite o valor da altura do tri�ngulo: ";
    cin>>altura;
    
    double area = (base * altura) / 2;
    cout << "A �rea do tri�ngulo �: " << area;

}
