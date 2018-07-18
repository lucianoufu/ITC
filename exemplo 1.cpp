//Programa que mostra todos os pares à partir de 2 até o número digitado pelo usuário
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
	printf("Digite um número possitivo: ");
	scanf("%d", &x);
	}
	printf("Os números pares são: ");
	while(y<=x)
	{
		printf("%i, ",y);
		y+=2;
	}
	getch();
	return 0;
}
