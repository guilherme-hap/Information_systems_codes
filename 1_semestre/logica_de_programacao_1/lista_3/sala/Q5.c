#include <stdio.h>
// Questão 5 (SALA).

int main()
{
	int i;
	for(i=1;i<200;i++) {
		if (i<200 && i%4==0) {
			printf("%i\n", i);
		}
	}
}