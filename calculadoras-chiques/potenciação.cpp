#include <stdio.h>
#include <stdlib.h>
#include <cmath>


main(){
	
	printf("\n####### VAMOS FAZER UMA POTENCIAÇÃO!! #######\n");

	
	int a, b;
	printf("\n\nDigite o valor da base:\n");
	scanf("%d", &a);
	printf("\nVALOR DA BASE DIGITADO COM SUCESSO!!!\n");
	printf("\n##########\n");
	
	printf("\nDigite o valor do expoente:\n");
    scanf("%d", &b);
    printf("\nVALOR DO EXPOENTE DIGITADO COM SUCESSO\n");
	
	int c = pow(a,b);
	
	printf("\n\n####### HORA DO RESULTADO!! #######\n\n");

	
	printf("O resultado da sua potencia é %d^%d = %d\n\n", a,b,c);
	
	return 0;

	
}
