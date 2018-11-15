#include <stdio.h>

int main(void){
	int coordx, coordy;

	while(coordx != 0 && coordy != 0){
		scanf("%d %d", &coordx, &coordy);

		if(coordx > 0 && coordy > 0){
			printf("primeiro\n");

		}else if(coordx < 0 && coordy > 0){
			printf("segundo\n");

		}else if(coordx < 0 && coordy < 0){
			printf("terceiro\n");

		}else if(coordx > 0 && coordy < 0){
			printf("quarto\n");
		}
	}

	return 0;
}
