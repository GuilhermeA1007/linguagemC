#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/*  C�lculo de IMC 
	@author Guilherme Arag�o de Oliveira	
	*/

int main(int argc, char *argv[]) {
	setlocale	(LC_ALL, "Portuguese");
	printf		("C�lculo de IMC\n");
										// 	Variaveis 		//
		 
	float peso,altura,imc;
		
										// entrada de dados	//
		
	printf	(" Digite a altura: ");
	scanf	("%f", &altura);
	printf(	" Digite a peso: ");
	scanf	("%f", &peso);

										// Processamento // 
		
	imc =  peso / (altura*altura);
		
		//	Saida //
		
	printf("Resultado: %.1f\n", imc);
	system	("pause");
	return 0;
	
}

