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
		menuMaxMin();
		break;
	case 4:
		menuResultAB();
		break;
	case 99:
		exit(0);
		break;
	}
	return 0;
}


void menuSizeOf() {

	printf("\nTama�o de short: %d, su m�nimo es: %d, y su m�ximo es: %d.", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("\nTama�o de int: %d, su m�nimo es: %d, y su m�ximo es: %d.", sizeof(int), INT_MIN, INT_MAX);
	printf("\nTama�o de float: %d, su m�nimo es: %d, y su m�ximo es: %d.", sizeof(float),FLT_MIN, FLT_MAX);
	printf("\nTama�o de double: %d, su m�nimo es: %d, y su m�ximo es: %d.", sizeof(double), DBL_MIN, DBL_MAX);
	printf("\nTama�o de long: %d, su m�nimo es: %d, y su m�ximo es: %d.", sizeof(long),LONG_MIN, LONG_MAX);
	printf("\nTama�o de long long: %d, su m�nimo es: %d, y su m�ximo es: %d.", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("\nTama�o de size_t: %d, su m�nimo es: %d, y su m�ximo es: %d.", sizeof(size_t), 0, SIZE_MAX);
}
void menuFormats() {

}
void menuMaxMin() {

}
void menuResultAB() {

}

