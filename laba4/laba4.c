#include <stdio.h>
#include <stdbool.h>
#include "tr.h"
#include <math.h> 

/* Написать функции, вычисляющие периметр и площадь треугольника по значениям длин трёх его сторон. Разместить их в отдельном модуле 
(отличном от того, где распо-лагается функция main( )). Ввести с консоли значения длин сторон треугольника (с проверкой на корректность неравенства треугольника)
 и выдать на консоль вычислен-ные с помощью написанных функций значения его периметра и площади. */
int main(int argc, char *argv[]) {
	double a,b,c, p, s;
	printf("vvedite znacheniy\n");
	scanf("%lf%lf%lf", &a,&b,&c); 
	if (IsTriangle(a,b,c)){
		p=perim(a,b,c);
		s=pl(a,b,c);
		printf("p=%lf\ns=%lf\n",p,s);
	}
	else{
		printf("Triangle isn't\n");
	}
	return 0;
}
