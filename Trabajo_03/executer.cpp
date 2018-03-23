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

	printf("\nTamaño de short: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("\nTamaño de int: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(int), INT_MIN, INT_MAX);
	printf("\nTamaño de float: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(float),FLT_MIN, FLT_MAX);
	printf("\nTamaño de double: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(double), DBL_MIN, DBL_MAX);
	printf("\nTamaño de long: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(long),LONG_MIN, LONG_MAX);
	printf("\nTamaño de long long: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("\nTamaño de size_t: %d, su mínimo es: %d, y su máximo es: %d.", sizeof(size_t), 0, SIZE_MAX);
}
void menuFormats() {

}
void menuMaxMin() {

}
void menuResultAB() {

}

