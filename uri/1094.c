#include <stdio.h>

int main(void){
	int i, casos, quantidade, total = 0, coelhos = 0, ratos = 0, sapos = 0;
	double percentcoelhos, percentratos, percentsapos;
	char tipo;

	scanf("%d", &casos);

	for(i = 1; i <= casos; i++){
		scanf("%d %c", &quantidade, &tipo);

		if(tipo == 'C'){
			coelhos += quantidade;

		}else if(tipo == 'R'){
			ratos += quantidade;

		}else if(tipo == 'S'){
			sapos += quantidade;

		}

		total = coelhos + sapos + ratos;
		percentcoelhos = (coelhos/total) * 100;
		percentratos = (ratos/total) * 100;
		percentsapos = (sapos/total) * 100;
	
	}

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2lf %%\n", percentcoelhos);
	printf("Percentual de ratos: %.2lf %%\n", percentratos);
	printf("Percentual de sapos: %.2lf %%\n", percentsapos);

	return 0;

}
