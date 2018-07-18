//Programa que mostra todos os múltiplos de 7 do intervalo fechado 14-num, onde num é um número múltiplo de 7 digitado pelo usuário.
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	int num ,y = 14;
	setlocale(LC_ALL,"portuguese");
	printf("Digite um número: ");
	scanf("%i",&num);
	while(num < 7)
	{
	printf("Por favor, digite um numero igual ou maior que 7: ");
	scanf("%i",&num);
	}
	printf("Os números multiplos e maiores que 7 são: ");
	while(y<=num)
	{
		if(y%7==0)
		printf("%i, ", y);
		y++;
	}
	getch();
	return 0;
}
