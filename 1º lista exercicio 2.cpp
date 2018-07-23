/*Programa que lê o horário(hora,minuto e segundo) de início e a duração de uma experiência biológica, em seguida
informar o horÃ¡rio (hora, minuto e segundo) so termino da mesma*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int preenche_experimento()
{
	int horaini = 00, minutosini = 00, segundosini = 00;
	int hora = 00, minutos = 00, segundos = 00;
	int horasfim = 00, minutosfim = 00, segundosfim= 00;
	printf("Digite a hora, minutos e segundos respectivamente, do inicio da experiência: ");
	scanf("%i %i %i", &horaini, &minutosini, & segundosini);
	printf("Digite a quanto tempo em horas, minutos e segundos respectivamente durou o experimento: ");
	scanf("%i %i %i", &hora, &minutos, &segundos);
	horasfim = horaini + hora;
	minutosfim = minutos + minutosini;
	segundosfim = segundos + segundosini;
	while(segundosfim>60)
	{
		minutosfim+=1;
		segundosfim-=60;
	}
	while(minutosfim>60)
	{
		horasfim+=1;
		minutosfim-=60;
	}
	printf("O experimento terminou as: %i:%i:%i", horasfim, minutosfim, segundosfim);
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int opcao;
	preenche_experimento();
	do
	{
		printf("\n1 - Digitar outro experimento\n2 - Sair do programa\nDigite: ");
		scanf("%i",&opcao);
		switch(opcao)
		{
			case 1:
				system("cls");
				preenche_experimento();
				break;
		}
	}
	while(opcao!=2);
	return 0;
}
