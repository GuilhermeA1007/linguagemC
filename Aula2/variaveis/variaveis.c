#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
 		/*	Estudo das variáveis
 			@author Guilherme Aragao
		*/

int main(int argc, char *argv[]) {
	setlocale	(LC_ALL,"Portuguese");
		// Tipos de variaveis //
	char 	professor[30]={"Guilherme Aragão"}; // [30]--> Numero de caracteres maximo a ser usado // 
	char 	personal  = 's';
	int  	periodo = 1;
	float 	cargaHoraria = 30.5;
	double 	salario = 3500.65; 
	printf	("ACADEMIA GAO\n");
	printf	("_________________________\n");
		// %s -> Ler o tipo de variável
		// , (Vírgula unir o texto ao conteúdo da variável
	printf	("Professor: 				%s\n", 		professor);
	printf	("Personal Traineer(s/n): %c\n", 		personal);
	printf	("Período: 				%d\n", 		periodo);
		// .1 antes de %f arredonda para 1 casa decimal //
	printf	("Carga horária semanal: %.1f\n" , 	cargaHoraria);
	printf	("Salário: 				R$%.2lf\n" , salario);
	printf	("_________________________\n");
	system	("pause");
	system	("cls");
	// Entrada de dados //
	char 	aluno[50];
	char 	sexo;
	int 	idade;
	float	peso, altura;
	printf	("CADASTRO DE ALUNO  \n\n");
	printf	("Nome do Aluno(a): ");
		// O Comando gets é usado especificamente para capturar String (char[]) // 
	gets	(aluno);
	printf	("Sexo(M/F): ");
		// O Comando scanf é usado para capturar as demais variáveis
		// O simbolo &(Amper) é usado para referencia a memória 
	scanf	("%c", &sexo);
	printf	("Idade: ");
	scanf	("%d", &idade);
	printf	("Peso(Kg): ");
	scanf	("%f", &peso);
	printf	("Altura(M): ");
	scanf	("%f", &altura);
	system	("pause");
	system	("cls");
	printf	("Ficha Do Aluno(a)\n");
	printf	("__________________________\n");
	printf	("Aluno: 	%s\n", aluno);
	printf	("Sexo: 	%c\n", sexo); 
	printf	("Idade:	%d\n", idade);
	printf	("Peso: 	%.1f\n", peso);
	printf	("Altura:	%.2f\n", altura);
	printf	("_________________________\n");

	
	
	system("pause");	

	return 0;
}
