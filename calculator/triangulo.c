#include <stdio.h>
#include <stdlib.h>

main(){
	
	float h, b; 
	
	printf("Digite a base do seu triangulo: ");
	scanf("%f", &b);
	
	printf("Digite a altura do seu triangulo: \n");
	scanf("%f", &h);
	
	float area = (b*h)/2;
	
	printf ("A area do triangulo é de: %f", area);
	
	return 0;
}
	
