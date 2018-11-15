#include <stdio.h>

int main(void){
	int casos, i; //, num1, num2;
	double divisao, num1, num2;

	scanf("%d", &casos);

	for(i = 1; i <= casos; i++){
		scanf("%lf %lf", &num1, &num2);
		divisao = num1/num2;

		if(num2 == 0){
			printf("divisao impossivel\n");

		}else{
			printf("%.1lf\n", divisao);
		}
	}

	return 0;
}
