#include <stdio.h>

int main(void){
	int horainicial, minutoinicial, horafinal, minutofinal;
	int duracaohoras, duracaominutos;

	scanf("%d %d %d %d", &horainicial, &minutoinicial, &horafinal, &minutofinal);

	duracaohoras = horafinal - horainicial;

	if(duracaohoras < 0){
		duracaohoras = 24 + (horafinal - horainicial);
	}

	duracaominutos = minutofinal - minutoinicial;

	if(duracaominutos < 0){
		duracaominutos = 60 + (minutofinal - minutoinicial);
		duracaohoras -= 1;
	}

	if(horainicial == horafinal && minutoinicial == minutofinal){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	
	}else{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaohoras, duracaominutos);
	
	}

	return 0;

}
