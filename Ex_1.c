/*	Fazer um programa para receber um n�mero e verificar se est� entre 100
e 200. Se estiver na faixa, imprimir: "Voce digitou um numero entre 100 e 200",
Sen�o estiver na faixa, imprimir:" Voce digitou um numero fora da faixa entre100 e 200.	*/

#include <stdio.h>

main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num >= 100 && num <= 200){
		printf("Voce digitou um numero entre 100 e 200");
	}else{
		printf("Voce digitou um numero fora da faixa entre 100 e 200");
	}
	printf("\n");
}
