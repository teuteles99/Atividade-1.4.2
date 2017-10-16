#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int cont;
	float nota[4];
	float media = 0;
	for(cont = 0; cont < 4; cont++){
		printf("Digite a %dª nota: ", cont + 1);
		scanf("%f", &nota[cont]);
		media = media + (nota[cont] / 4);
	}
	printf("A média aritmética das notas é: %.2f\n", media);
	if (media >= 7){
		printf("ALUNO APORVADO");
	}
	else if (media >= 5 && media < 7){
		printf("ALUNO DE EXAME FINAL");
	}
	else if (media < 5){
		printf("ALUNO REPROVADO");
	}
}
