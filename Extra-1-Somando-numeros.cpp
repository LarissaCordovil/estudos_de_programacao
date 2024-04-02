#include <iostream>
using namespace std;

main() {
	
	system ("chcp 65001");
	
    int soma = 0;

    for (int i = 1; i <= 10; ++i) {
        soma += i; 
    }

    cout << "A soma dos números de 1 a 10 é: " << soma;

}
