// Trabajo_03.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "menu.h"
#include "executer.h"


int main()
{
	uint8_t value = menu();
	execute(value);
	_getch();
	main();
    return 0;
}

