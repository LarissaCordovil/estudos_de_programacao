#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
    int idade;
    int idadeMeses, idadeDias;

    cout<<"Digite a idade em anos: ";
    cin>>idade;
    idadeDias = idade * 365; // Considerei 1 ano = 365 dias
    idadeMeses = idade * 12; // Cálculo da idade em meses
	cout<<"A idade em meses é: "<<idadeMeses<<" e em dias : "<<idadeDias<<". ";
}
