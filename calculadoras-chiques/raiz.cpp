#include <stdio.h>
#include <stdlib.h>
#include <cmath>


main(){
	
	printf("\n####### VAMOS FAZER VER UMA RAIZ!! #######\n");

	
	int a;
	printf("\n\nDigite o valor da raiz que você que saber:\n");
	scanf("%d", &a);
	printf("\nVALOR DA RAIZ DIGITADO COM SUCESSO!!!\n");
	printf("\n##########\n");

	int c = sqrt(a);
	
	printf("\n\n####### HORA DO RESULTADO!! #######\n\n");

	
	printf("O resultado da sua potencia é %d = %d\n\n", a,c);
	
	return 0;

	
}
