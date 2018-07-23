#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

void verifica_numero()
{
	int x, y;
	printf("Digite um numero: ");
	scanf("%i", &x);
	printf("Digite outro numero: ");
	scanf("%i", &y);
	system("cls");
	if(x % y == 0)
	printf("%i é divisivel por %i", x, y);
	else
	printf("%i não é divisivel por %i" ,x ,y );
}

int main()
{
	int x, y, opcao;
	setlocale(LC_ALL,"portuguese");
	verifica_numero();
	do
	{
		printf("\n\n1 - Digitar outros números.\n2 - Sair do programa.\nDigite: ");
		scanf("%i", &opcao);
		switch(opcao)
		{
			case 1 :
				system("cls");
				verifica_numero();
				break;
		}
	}
	while(opcao !=2);
	return 0;
}
