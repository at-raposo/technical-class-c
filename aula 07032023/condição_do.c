#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

	setlocale(LC_ALL, "Portuguese"); //atribui os acentos gramaticais da lingua portuguesa

	int contador = 1;
	float nota, maior=0, menor=10; //float serve para números reais

	do //fazer essa sequencia de comandos...
	{ 
		printf("Digite a %d.a nota:", contador);
		scanf("%f",&nota);
		while(nota<0 || nota>10)// ESSE COMANDO DE BARRAS RETAS SERVE PARA IMPEDIR QUE NUMEROS MAIORES QUE ESSES SEJAM ESCRITOS // as barras retas significam OU
		{	
		printf("Dados incorretos. Digite um número entre 0 e 10.\nPor favor, digite novamente:");
		scanf("%f,",&nota);
			}
		if (nota>maior) //SE A NOTA DIGITADA FOR SUPERIOR A INFORMAÇÃO EM MAIOR
		maior=nota;
		if(nota<menor)
		menor = nota;
	
		contador ++;	
			}
	while (contador<=10); //...enquanto essa condição for verdadeira
	printf("\n A maior nota é: %f", maior);
	printf("\n A menor nota é: %f", menor);	

	return 0;

}
