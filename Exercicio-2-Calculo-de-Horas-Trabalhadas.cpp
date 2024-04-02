#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
	double valorHora = 8.50;
	double qtdeHorasTrabalhadas = 220;
	cout<<"A hora trabalhada custa: R$ "<<valorHora<<"\n";
	cout<<"A quantidade de horas trabalhadas foi: "<<qtdeHorasTrabalhadas<<" horas \n";
	cout<<"O valor so salário do trabalhador será de: R$ "<<valorHora * qtdeHorasTrabalhadas<<"\n\n";
}
