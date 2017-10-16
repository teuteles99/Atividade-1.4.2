#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float nota[4], media;
	media = 0;
	int cont;
	for (cont = 0; cont < 4; cont++){
		printf("Digite a %dª nota: ", cont + 1);
		scanf("%f", &nota[cont]);
		while(nota[cont] < 0 || nota[cont] > 10){
			printf("A nota deve ser entre 0 e 10\n");
			printf("Digite a %dª nota: ", cont + 1);
			scanf("%f", &nota[cont]);
		}
		media = media + (nota[cont] / 4);
	}
	printf("A média aritmética das nota é: %.2f\n", media);
	if (media >= 7){
		printf("ALUNO APROVADO");
	}else if (media >= 5 && media < 7){
		printf("ALUNO DE EXAME FINAL");
	}else if (media < 5){
		printf("ALUNO REPROVADO");
	}
}
