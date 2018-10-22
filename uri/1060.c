#include <stdio.h>

int main(void){
	float valor;
	int i, quantidade = 0;

	for(i = 1; i <= 6; i++){
		scanf("%f", &valor);
		
		if(valor > 0){
			quantidade += 1;
		}
	
	}
	
	printf("%d valores positivos\n", quantidade);

	return 0;

}

	

