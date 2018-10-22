#include <stdio.h>

int main (void){
	float nota1, nota2, nota3, nota4, media, notaexame, mediafinal;

	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + nota4)/10;

	printf("Media: %.1f\n", media);

	if(media >= 7.0){
		printf("Aluno aprovado.\n");

	}else if(media < 5.0){
		printf("Aluno reprovado.\n");
		
	}else if(media >= 5.0 && media <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%f", &notaexame);
		printf("Nota do exame: %.1f\n", notaexame);
		
		mediafinal = (media + notaexame)/2;

		if(mediafinal >= 5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", mediafinal);

		}else if(mediafinal < 5.0){
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", mediafinal);

		}
	}

	return 0;

}
