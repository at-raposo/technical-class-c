/*
  Name: Bases conversors
  Author:Thainá (ANDY) Raposo
  Date: 10/05/23
  Description: The objective of this program is to convert the octal numbers to a decimals number and
  decimal numbers in a octal number.

  ATT: All coments in this program are in Brazilian Portugues, you can find the translation on
  https://translate.google.com.br
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "PORTUGUESE");
	int i = 0, value = 0, j = 0, count = 0, final = 0;
	int vet_0[10];
	
	for(;;){
	
	printf("\n\n#### CONVERSOR DE BASES DECIMAL E OCTAL ####\n\n");
	printf("** Escolha uma opção \n\n - 0 para Decimal -> Octal \n\n\ - 1 para Octal -> Decimal\n\n"); 
	printf("\n -Digite aqui sua opção:");                                                                             
	scanf("%d",&i);
	scanf("--> %d",&i);
	printf("Insira o valor para conversao:\n\n");
	scanf("--> %d",&value);
	
		if(i!= 0||1){
		printf("\n### VALOR NÃO ENCOTRADO, DIGITE NOVAMENTE ###\n");
	}
	if(i == 0){
		while(value >= 1){
			vet_0[j] = value%8;
			value = value/8;
			j++;
		}
		count = j;
		for(j = count - 1; j>=0; j--){
		printf("%d",vet_0[j]);
		}
		
	}
	
	
	if(i == 1){
		while(value >= 1){
			vet_0[j] = value%10;
			value = value/10;
			j++;
		}
		count = j;
		for(j = count ; j>0; j--){
			final = final + pow(8,j-1)*vet_0[j-1];
		}
			printf("%d",final);

		}
		 printf("\n\n\ ### PROGRAMA FINALIZADO ###\n\n");
		 
}  
}
