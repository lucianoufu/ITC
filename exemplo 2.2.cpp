//Programa que mostra todos os m�ltiplos de 7 do intervalo fechado 14-num, onde num � um n�mero m�ltiplo de 7 digitado pelo usu�rio.
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	int num ,y = 14;
	setlocale(LC_ALL,"portuguese");
	printf("Digite um n�mero: ");
	scanf("%i",&num);
	while(num < 7)
	{
	printf("Por favor, digite um numero igual ou maior que 7: ");
	scanf("%i",&num);
	}
	printf("Os n�meros multiplos e maiores que 7 s�o: ");
	while(y<=num)
	{
		if(y%7==0)
		printf("%i, ", y);
		y++;
	}
	getch();
	return 0;
}
