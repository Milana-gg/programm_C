#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Объявить вещественные переменные a, b и с и задать их значения. Предполагая, что a, b, c есть коэффициенты квадратного уравнения вывести на консоль значения их кор-ней х1, х2. Следует подобрать такие значения коэффициентов, при которых корни бу-дут существовать.
	Примечание. Для выполнения задания потребуется функции вычисления квад-ратного корня (возведение в степень), а так же вывод данных на консоль.
	Возведение в степень - подключаем заголовочный файл	 math.h и исполь-зуем функцию pow, первым параметром которого должен быть возводимое значение, а вторым - степень, тип данных double.
	Вывод данных - заголовочный файл stdio.h, функция printf, первым параметром является форматная строка, а последующие - переменные, значения которых необхо-димо вывести.
/*
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) { 
	double a,b,c; //объявляем вещемтвенные переменные 
	double x1, x2, d; 
	//объявляем значения переменных
	printf("vvedite koaffisent a ");
	scanf("%lf", &a);
	
	printf("vvedite koaffisent b ");
	scanf("%lf", &b); 
	
	printf("vvedite koaffisent c ");
	scanf("%lf", &c);
	
	d=b*b-4*a*c;
	 if (d>= 0) {
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
  } else {
   
    printf("korney net.\n");
  }

	return 0;
}

