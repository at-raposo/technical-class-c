#include <stdio.h>
#include <stdlib.h>

main(){
		setlocale (LC_ALL, "Portuguese"); // indica a lingua e configurações ortograficas
	
	
	printf("\n####### VAMOS FAZER UMA SOMA!! #######\n");

	
	int a,b;
	printf("\n\nDigite o primeiro valor:\n");
	scanf("%d", &a);
	printf("\nPRIMEIRO VALOR DIGITADO COM SUCESSO!!!\n");
	printf("\n##########\n");
	
	printf("\nDigite o segundo valor:\n");
    scanf("%d", &b);
    printf("\nSEGUNDO VALOR DIGITADO COM SUCESSO\n");
	
	int c = a + b;
	
	printf("\n\n####### HORA DO RESULTADO!! #######\n\n");

	
	printf("O resultado da sua soma de %d + %d = %d\n\n", a,b,c);
	
	return 0;

	
}
