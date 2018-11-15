#include <stdio.h>

int main(void){
	int valor, i;

	scanf("%d", &valor);

	for(i = valor; i <= valor + 12; i++){
		if(i % 2 != 0){
			printf("%d\n", i);
		
		}
	}

	return 0;

}
