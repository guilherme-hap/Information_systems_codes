#include <stdio.h>
// Questão 4 (SALA).

int main()
{
	int N;
	printf("Insira um número: \n");
	scanf("%i", &N);
	do {
		printf("%i\n", N);
		N=N*3;
	}
	while (N<250);
}