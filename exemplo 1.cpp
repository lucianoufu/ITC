//Programa que mostra todos os pares � partir de 2 at� o n�mero digitado pelo usu�rio
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int x=0,y=2;
	setlocale (LC_ALL, "portuguese");
	while(x<=0)
	{
	system("cls");
	printf("Digite um n�mero possitivo: ");
	scanf("%d", &x);
	}
	printf("Os n�meros pares s�o: ");
	while(y<=x)
	{
		printf("%i, ",y);
		y+=2;
	}
	getch();
	return 0;
}
