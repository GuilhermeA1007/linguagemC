#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/*  C�lculo da m�dia 
	@author Guilherme Arag�o de Oliveira	
	*/

int main(int argc, char *argv[]) {
	setlocale	(LC_ALL, "Portuguese");
	printf	("C�lculo da M�dia\n");
		// 	Variaveis 		//
		 
	float nota1,nota2,nota3,nota4,media;
		
		// entrada de dados	//
		
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	printf("Digite a nota 4: ");
	scanf("%f", &nota4);
	
		// Processamento // 
		
	media = ( nota1 + nota2 + nota3 + nota4 ) /2;
		
		//	Saida //
		
	printf("Resultado: %.1f\n", media);
	system	("pause");
	return 0;
	
}
