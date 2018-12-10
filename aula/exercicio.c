#include <stdio.h>

int num;
int func(int a, int b){
	a = (a + b)/2;
	num -= a + 1;
	return a;
}

int main(){
	int first = 0, sec = 50;
	num = 10;
	printf("%d %d %d\n", num, first, sec);
	num += func(first, sec);
	printf("%d %d %d\n", num, first, sec);
}
