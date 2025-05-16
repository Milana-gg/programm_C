#include <stdio.h>
#include <stdlib.h>
#include "Func.h"

/* Создать в отдельном модуле функции с переменным количеством аргументов,
 которая вычисляет их сумму, максимум, минимум, среднее арифметическое. */

int main(int argc, char *argv[]) {
	int count;
	int i;
	printf("enter the number of numbers: ");
	scanf("%d", &count);
	
	int *numbers = (int*)malloc(count * sizeof(int));
    if (numbers == NULL) {
        printf("mistake!\n");
        return 1;
    }
    
	printf("enter %d the numbers separated by a space:\n ", count);
	
	for(i=0; i<count; i++){
		scanf("%d", &numbers[i]);
	}
	
	printf("\nResult:\n");
    printf("Sum: %d\n", sum_find(count, numbers));
    printf("Max: %d\n", max_find(count, numbers));
    printf("Min: %d\n", min_find(count, numbers));
    printf("average: %.2f\n", average_find(count, numbers));
    
    free(numbers);
	return 0;
}
