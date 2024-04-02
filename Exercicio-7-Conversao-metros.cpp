#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
	
    int valorQuilometros;
    int metros, centimetros;

    cout<<"Digite um valor em quilometros: ";
    cin>>valorQuilometros;
    metros = valorQuilometros * 1000; // 1 quilometro = 1000 metros
    centimetros = valorQuilometros * 100000; // Calculo dos centimetros
	cout<<"O total é: "<<metros<<" metros ou "<<centimetros<<" centimetros.";

    return 0;
}
