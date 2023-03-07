#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

setlocale(LC_ALL, "Portuguese");

system("color 78"); //muda a cor do promp de comando

int num, cont=0; //iniciarei com a tabuada o 0

while(cont<=10){ //enquanto a a condição verdadeira, faça
	num = 0; //atrinui o valor 0 a variavel num
	
	while (num<=10){ //enquanto a a condição verdadeira, faça
	

	printf("\n %d X %d = %d \n", cont,num,cont*num);
	num ++;
}
	printf("\n");
	cont ++;
}
	
	return 0;	
	
	
	
	
	
}
