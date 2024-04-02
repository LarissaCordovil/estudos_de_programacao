#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
	double milha = 1.60934;
	double milhas;
	cout<<"Digite a quantidade de milhas: ";
	cin>>milhas;
	cout<<"O total de quilometros é: "<<milhas * milha;
}
