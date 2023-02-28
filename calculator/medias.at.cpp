#include <stdio.h>
#include <stdlib.h>

main(){
	
	int n1, n2, n3, n4;
	
	printf("Digite a nota da primeira prova: \n");
	scanf("%d", &n1);
	
	printf("Digite a nota da segunda prova: \n");
	scanf("%d", &n2);
	
	printf("Digite a nota da terceira prova:\n");
	scanf("%d", &n3);
	
	printf("Digite a nota da quarta prova:\n");
	scanf("%d", &n4);
	
	int notas = n1 + n2 + n3 + n4;
	int media = notas /4;
	printf("a nota da sua media final e igual a:\n %d\n", media);
	
	return 0;
	
	
	
}


