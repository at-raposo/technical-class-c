/*
  Name: Bases conversors
  Author:Thainá (ANDY) Raposo
  Date: 10/05/23
  Description: The objective of this program is to convert the hexadecimal numbers to a decimals number and
  decimal numbers in a hexadecimal number.

  ATT: All coments in this program are in Brazilian Portugues, you can find the translation on
  https://translate.google.com.br
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	
	int i = 0, d = 0, h = 0;
	setlocale(LC_ALL, "PORTUGUESE");
	
	for(;;){

	printf("\n\n#### CONVERSOR DE BASES HEXADECIMAL E BINÁRIO ####\n\n");
	printf("** Escolha uma opção \n\n - 0 para Decimal -> Hexadecimal \n\n\ - 1 para Hexadecimal -> Decimal\n\n"); 
	printf("\n -Digite aqui sua opção:");                                                                             
	scanf("%d",&i);

	if(i!= 0||1){
		printf("\n### VALOR NÃO ENCOTRADO, DIGITE NOVAMENTE ###\n");
	}
 	if(i == 0){
	 
    printf ("Entre com um numero decimal: ");
    scanf ("%d",&d);
    printf ("A conversao do numero %d em hex e %2X:\n",d,d);
}
    if(i == 1){ 
    printf ("Entre com um numero hexadecimal: ");
    scanf ("%X",&h);
    printf ("A conversao do numero %X em decimal e %d :\n",h,h); 
}
    printf("\n\n\ ### PROGRAMA FINALIZADO ###\n\n");
}
}
