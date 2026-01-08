#include <stdio.h>

int main()
{
	int i;
	char frase[15]= "Lai se vai!";
	
	for(i=0; i<15; i++)
	{
		printf("A letra da Posicao %d eh: %c\n\n",i,frase[i]);
	}
	
	printf("A frase: %s",frase);
	
	return 0;
}