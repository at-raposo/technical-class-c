/*
  Name: Bases conversors
  Author:Thainá (ANDY) Raposo
  Date: 27/04/23
  Description: The objective of this program is to convert the binary numbers to a decimals number and
  decimal numbers in a binary number.

  ATT: All coments in this program are in Brazilian Portugues, you can find the translation on
  https://translate.google.com.br
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main (){
	
	for(;;){
	
	int i = 0, value = 0, j = 0, count = 0, final = 0;
	int vet_0[10];
	setlocale(LC_ALL, "PORTUGUESE");
	    
	printf("\n\n#### CONVERSOR DE BASES DECIMAL E BINÁRIO ####\n\n");
	printf("** Escolha uma opção \n\n - 0 para Decimal -> Binario \n\n\ - 1 para Binario -> Decimal\n\n"); 
	printf("\n -Digite aqui sua opção:");                                                                             
	scanf("%d",&i);
	printf("\n\n- Insira o valor para conversao:");
	scanf("%d",&value);
	printf("\n ### \n");
	
	
	if(i == 0){
		while(value >= 1){
			vet_0[j] = value%2;
			value = value/2;
			j++;
		}
		count = j;
		for(j = count - 1; j>=0; j--){
		printf("%d",vet_0[j]);
}
			
			printf("\n\nO valor a cima representa o valor da sua conversão\n\n");
	}
	
	
	if(i == 1){
		while(value >= 1){
			vet_0[j] = value%10;
			value = value/10;
			j++;
		}
		count = j;
		for(j = count ; j>0; j--){
			final = final + pow(2,j-1)*vet_0[j-1];
		}
			printf("%d",final);
			printf("\n\nO valor a cima representa o resultado final da sua conversão\n\n ");

		}
		
		printf("\n\n### PROGRAMAÇÃO FINALIZADA ###\n\n");
		printf("\n.\n.\n.\n");
	}
}  
