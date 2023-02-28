#include <stdio.h>
#include <stdlib.h>

main(){
	
	float h, b; 
	
	printf("Digite o lado A do seu retangulo: ");
	scanf("%f", &b);
	
	printf("Digite o lado B do seu retangulo: \n");
	scanf("%f", &h);
	
	float area = b*h;
	
	printf ("Sua area � de: %f", area);
	
	return 0;
}
	
