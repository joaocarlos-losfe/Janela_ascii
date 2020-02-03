#include <stdio.h>
#include <stdlib.h>

// gera uma 'jenela' vazia para inserção de outras
void GenerateEmptyWindow(int c, int l, char windows[c][l])
{
	printf("window create...%dx%d\n", c, l);
	int i,j;
	for(i=0; i<c; i++)
	{
		for(j=0; j<l; j++)
		{
			if(i==0 || i== c-1)
			{
				windows[i][j] = '-';
			}
			else
			{
				windows[i][j] = ' ';
			}
			
		}
	}
}

void ShowWindow(int c, int l, char windows[c][l])
{
	int i,j;
	
	for(i=0; i<c; i++)
	{
		for(j=0; j<l; j++)
		{
			printf("%c",windows[i][j]);
		}
		printf("\n");
	}
}

// insere a janela na tela. necessario ter una janela vazia criada antes
void CreateWindow(int c, int l, char empty_window[c][l], int c1, int l1, char window[c1][l1], int coordinateX, int coordinateY)
{
	
	int i, j;
	int y = coordinateY;
	int x = coordinateX;
	
	for(i=0; i<c1; i++)
	{
		for(j=0; j<l1; j++)
		{
			empty_window[x][y] = window[i][j];
			y++;
		}
		y = coordinateY;
		x++;
	}	
			
}