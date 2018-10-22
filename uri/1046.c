#include <stdio.h>

int main(void){
	int horainicial, horafinal, duracao;

	scanf("%d  %d", &horainicial, &horafinal);
	
	if(horainicial > horafinal){
		duracao = 24 - (horainicial - horafinal);
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	
	}else if(horafinal > horainicial){
		duracao = horafinal - horainicial;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);

	}else if (horainicial == horafinal){
		printf("O JOGO DUROU 24 HORA(S)\n");
	
	}

	return 0;

}
