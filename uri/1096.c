#include <stdio.h>

int main(void){
	int i = 1, j = 7;

	while(i < 10){
		printf("I=%d J=%d\n", i, j);

		if(j == 5){
			i += 2;
			j = 7;

		}else{
			j -= 1;
		}
	}

	return 0;
}
