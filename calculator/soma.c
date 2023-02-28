#include <stdio.h>
#include <stdlib.h>

 
 main(){
 
 	int num1, num2, num3, num4;
 	
 	
 	printf("Digite o primeiro numero:");
 	scanf("%d", &num1);
 	
 	printf("Digite o segundo numero:");
 	scanf("%d", &num2);
 	
 	printf("Digite o terceiro numero:");
 	scanf("%d", &num3);
 	
 	printf("Digite o quarto numero:");
 	scanf("%d", &num4);
 	
 	 int soma = num1 + num2 + num3 + num4;
 	
 	printf(" A soma dos numeros digitados e igual a %d \n" ,soma);
 	
 	system("Pause");
 	return 0;
 }
 
