#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, contador;
	
	
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &numero);
	printf("\nOs números impares menores que %d, são\n", numero);
	
	if (numero%2==0){
	
	numero==numero-1;
	}
	
	for (contador=numero; contador>=1; contador=contador-2)
	printf("\n%d\n", contador);
	printf("O número final do contador e %d \n", contador);
	printf("O número final do número e %d \n", numero);
	
	return 0;
	
}
