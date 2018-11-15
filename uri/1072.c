#include <stdio.h>

int main(void){
	int testes, valor , i, in = 0, out = 0;

	scanf("%d", &testes);

	for(i = 1; i <= testes; i++){
		scanf("%d", &valor);

		if(valor >= 10 && valor <= 20){
			in++;

		}else{
			out++;

		}

	}

	printf("%d in\n", in);
	printf("%d out\n", out);

	return 0;

}
