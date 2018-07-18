/*Programa que dado um numero, calcula H, sendo que h é a  seguinte soma:
H=1/1 + 1/2 + 1/3 + ... + 1/n.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	float h = 0, n, x = 1;
	setlocale(LC_ALL,"portuguese");
	printf("Digite um numero: ");
	scanf("%f", &n);
	while(x<=n)
	{
	h = h + 1/x;
	x++;
	}
	printf("\nO valor da soma é: %f.", h);
	getch();
	return 0;
}
