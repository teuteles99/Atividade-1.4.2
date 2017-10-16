/*	Faca um programa que receba tres notas, calcule e mostre a media aritmetica
entre elas, caso a media aritmetica seja:
Media maior ou igual a 7 --> ALUNO APROVADO
Media menor que 7 --> ALUNO REPROVADO	*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
full_screen(){
	
	keybd_event(VK_MENU,0x36,0,0);
	keybd_event(VK_RETURN,0x1C,0,0);
	keybd_event(VK_RETURN,0x1C,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);

}

main(){

	full_screen();
	setlocale(LC_ALL, "Portuguese");
	float nota[3], media;
	media = 0;
	int cont;
	for(cont = 0; cont < 3; cont++){
		printf("Digite a %dª nota: ", cont + 1);
		scanf("%f", &nota[cont]);
		media = media + (nota[cont] / 3);
	}
	printf("A média aritmética das notas é: %.2f\n", media);
	if (media >= 7){
		printf("ALUNO APROVADO");
	}
	else if (media < 7){
		printf("ALUNO REPROVADO");
	}
	
}
