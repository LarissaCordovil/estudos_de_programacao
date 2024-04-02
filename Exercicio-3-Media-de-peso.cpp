#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
	int numPessoas = 5;
	double pesoTotal;
	for (int i = 0; i < numPessoas; ++i) {
		double peso;
		cout<<"digite o peso da pessoa "<< i + 1<< ": \n";
		cin>>peso;
		pesoTotal+=peso;
	} 
	double media = pesoTotal / numPessoas;
	cout << "A média dos pesos das pessoas é: " << media;

	return 0;
}
