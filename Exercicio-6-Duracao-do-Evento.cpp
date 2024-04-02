#include <iostream> 
using namespace std; 

main() { 
	system("chcp 65001");
    int duracaoEmSegundos;
    int horas, minutos, segundos;

    cout<<"Digite a duração do evento em segundos: ";
    cin>>duracaoEmSegundos;
    horas = duracaoEmSegundos / 3600; // 1 hora = 3600 segundos
    duracaoEmSegundos %= 3600; // Operador que calcula o resto dos segundos
    minutos = duracaoEmSegundos / 60; // Calculo dos minutos
    segundos = duracaoEmSegundos % 60; // O restante são os segundos que sobraram
	cout<<"Duração do evento: "<<horas<<" horas, "<<minutos<<" minutos e "<<segundos<<" segundos.";

}

