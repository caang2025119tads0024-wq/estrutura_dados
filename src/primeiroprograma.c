#include <stdio.h>

int main (){
	int num1,resto;
	
	printf("Digite o numero: \n");
	scanf("%d",&num1);
	
	resto = num1%2;
	
	if(resto==1){
		printf("O Numero %d é impar. \n",num1);
	} else{
		printf("O Numero %d é par. \n",num1);
	}
	return 0;
}