#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
		Fundamentos da linguagem C 
		@author Guilherme Arag�o 

*/

int main(int argc, char *argv[]) {
	// a linha abaixo configura para o portugu�s //
	setlocale(LC_ALL, "Portuguese");
	printf("Ol� Mundo\n");
	system("color 1F");
	printf("Aluno Guilherme Arag�o\n");
	system("pause");
	// a linha abaixo limpa o prompt //
	system("cls"); 
	// a linha abaixo modifica a cor do background e do texto do prompt //
	system("color 09");
	printf("C�digo de cores\n\n");
	printf("0 - preto\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - verde �gua\n");
	printf("4 - vermelho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A - verde claro\n");
	printf("B - verde �gua claro\n");
	printf("C - vermelho claro\n");
	printf("D - lil�s\n");
	printf("E - amarelo claro\n");
	printf("F - branco brilhante\n");
	system("pause");
	return 0;
}
