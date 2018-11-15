#include <stdio.h>

int main(void){
	int senha;

	while(senha != 2002){
		scanf("%d", &senha);

		if(senha != 2002){
			printf("Senha Invalida\n");
		
		}else if(senha == 2002){
			printf("Acesso Permitido\n");
		}
	}

	return 0;
}
