#include <stdio.h>

int main(void){
	int valor, par = 0, i;

	for(i = 1; i <= 5; i++){
		scanf("%d", &valor);

		if(valor % 2 == 0){
			par += 1;
		}
	}

	printf("%d valores pares\n", par);

	return 0;

}
