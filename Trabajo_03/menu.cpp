#include "stdafx.h"
#include "menu.h"
#include "main.h"
#include <cctype>

int menu() {
	std::locale::global(std::locale("spanish"));
	system("cls");
	int election;
	printf("\n¡Bienvenidos! Elija una de las opciones y pulse enter\n [1] Imprimir Sizeof con sus mínimos y máximos\n [2] Imprimir un valor con diferentes formatos\n [3] Imprimir el valor: 0xFFFFFFFF signed y unsigned\n [4] Array\n [99] Salir\n");

	scanf_s("%d", &election);
	system("cls");
	if ((election > 0 && election < 5) || election == 99) {
		if (std::isdigit(election)) {
			Restart();
		}
		else return election;
	}
	else
	{
		Restart();
		return 0;
	}
}


void Restart() {
	std::cout << "Solo puede ingresar valores enteros entre 1 y 4, pulse una tecla para volver a empezar" << std::endl;
	_getch();
	main();
}
