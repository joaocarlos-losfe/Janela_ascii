/*
 * # Gerador de janelas utilizando matriz de caracteres #
 * * versão de teste 1.0.0
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include "window.h" 

int main(int argc, char** argv)
{
	// codigo teste de exemplo
	
	char janela_vazia[20][50]; // janela em branco responsavel por receber outra janela

//---------------------------------------------------------
	// criando uma janela com conteudo
	char janela[10][20]; 
	
	int i, j;
	for(i=0; i<10; i++)
	{
		for(j=0; j<20; j++)
		{
			janela[i][j] = 'x';
		}
	}
	
//----------------------------------------------------------
	// gerando a janela vazia (obrigatorio)
	
	GenerateEmptyWindow(20, 50, janela_vazia);  
	
	//preenchendo a janela em branco com o conteudo de outra janela
	// dados: 
	// Tamanho da janela vazia (20, 50)
	// A janela vazia
	// Tamanho da janela criada (10, 20)
	// A janela
	// As coordenadas para a 'copia' da janela para a janela vazia (linha 7 e coluna 30)
	
	CreateWindow(20, 50, janela_vazia, 10,20, janela, 5, 15);
	
	//exibindo a janela final após a copia da janela para a janela vazia
	
	ShowWindow(20, 50, janela_vazia);
	

	return 0;
}