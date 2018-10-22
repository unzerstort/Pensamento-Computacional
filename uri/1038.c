#include <stdio.h>

int main (void){
	int codigo, quantidade;
      	double hotdog, xsalada, xbacon, torrada, refri, total;

	hotdog = 4.00;
	xsalada = 4.50;
	xbacon = 5.00;
	torrada = 2.00;
	refri = 1.50;

	scanf("%d %d", &codigo, &quantidade);

	if(codigo == 1){
		total = hotdog * quantidade;
		printf("Total: R$ %.2lf\n", total);

	}else if(codigo == 2){
		total = xsalada * quantidade;
		printf("Total: R$ %.2lf\n", total);
	
	}else if(codigo == 3){
		total = xbacon * quantidade;
		printf("Total: R$ %.2lf\n", total);
	
	}else if(codigo == 4){
		total = torrada * quantidade;
		printf("Total: R$ %.2lf\n", total);

	}else if (codigo == 5){
		total = refri * quantidade;
		printf("Total: R$ %.2lf\n", total);
	}

	return 0;

}
