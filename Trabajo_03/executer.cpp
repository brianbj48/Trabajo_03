#include "stdafx.h"
#include "executer.h"
#include <float.h>


int execute(int menuN) {
	int men = menuN;
	switch (men)
	{
	case 1:
		menuSizeOf();
		break;
	case 2:
		menuFormats();
		break;
	case 3:
		menuResultAB();
		break;
	case 4:
		menuArray();
		break;
	case 99:
		exit(0);
		break;
	}
	return 0;
}


void menuSizeOf() {

	printf("\nTamaño de short: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("\nTamaño de int: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(int), INT_MIN, INT_MAX);
	printf("\nTamaño de float: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(float),FLT_MIN, FLT_MAX);
	printf("\nTamaño de double: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(double), DBL_MIN, DBL_MAX);
	printf("\nTamaño de long: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(long),LONG_MIN, LONG_MAX);
	printf("\nTamaño de long long: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("\nTamaño de size_t: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(size_t), 0, SIZE_MAX);

	/* x86
	Bytes short : 2, min : -32768, max : 32767
	Bytes int : 4, min : -2147483648, max : 2147483647
	Bytes float : 4, min : 0, max : 940572672
	Bytes double : 8, min : 0, max : 1048576
	Bytes long : 4, min : -2147483648, max : 2147483647
	Bytes long long : 8, min : 0, max : -2147483648
	Bytes size_t : 4, min : completar, max : -1*/

	//x64
	//	Bytes short : 2, min : -32768, max : 32767
	//	Bytes int : 4, min : -2147483648, max : 2147483647
	//	Bytes float : 4, min : 0, max : -536870912
	//	Bytes double : 8, min : 0, max : -1
	//	Bytes long : 4, min : -2147483648, max : 2147483647
	//	Bytes long long : 8, min : 0, max : -1
	//	Bytes size_t : 8, min : completar, max : -1
}
void menuFormats() {
	system("cls");
	char a = 65;
	printf("printf:\nEl valor decimal es: %d\nEl valor hexadecimal es: %#08X\nEl valor octal es: %o\nEl caracter es: %c\n", a, a, a, a);
	std::cout << "cout:\nEl valor decimal es: " << (int)a << "\nEl valor hexadecimal es :" << std::hex << (int)a << "\nEl valor octal es: " << std::oct << (int)a << "\nEl caracter es: " << a;
}
void menuResultAB() {
	int a = 0xFFFFFFFF;
	unsigned int b = 0xFFFFFFFF;
	printf("printf\nint a:%d \nunasined int b: %u\ncout\n", a, b);
	std::cout << a << std::endl;
	std::cout << b;
}
void menuArray() {
	int choice = 0;
	printf("\nIngrese un numero y presione ENTER:\n1_Ingresar valores en el array\n2_Mostrar valores del array\n");
	scanf_s("%d", &choice);
	switch (choice)
	{
		case 1:
			int numbs[2];
			printf("Luego de ingresar los valores presione enter\n");
			printf("Ingresa el primer valor entero:");
			scanf_s("%d", &numbs[0]);
			printf("Ingresa el segundo valor entero: ");
			scanf_s("%d", &numbs[1]);
			printf("Valores ingresados correctamente");
			menuArray();
			break;
		case 2:
			printf("Los valores ingresados son:\n");
			for (int i = 0; i < 2; i++)
			{
				printf("%d\n", numbs[i]);
			}
			break;
		default:
			printf("El valor ingresado no es correcto");
			break;
	}
}