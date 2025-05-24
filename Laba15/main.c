#include <stdio.h>
#include <stdlib.h>

/* Дано натуральное число N. Выведите все его цифры по одной, в обычном порядке (а потом в обратном), разделяя их пробелами или новыми строками.
 Например: 179 => 1 7 9; 179 => 9 7 1 */

#include <stdio.h>

// Функция для печати цифр числа в обычном порядке
void print_normal(int n) {
    if (n < 10) {
        printf("%d ", n);
    } else {
        // Печатаем все цифры кроме последней
        print_normal(n / 10);//благодаря тому, что функция вызывает саму себя, эта строка выполняется многократно
        
        printf("%d ", n % 10);// Затем печатаем последнюю цифру
    }
}

void print_reverse(int n) {
    if (n < 10) {
        printf("%d ", n);
    } else {
        printf("%d ", n % 10);//179:10 -> 17 -> 17>10 -> else -> 17:10 ->
        print_reverse(n / 10);
    }
}

int main() {
    int number;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    printf("Цифры в обычном порядке: ");
    print_normal(number);
    printf("\n");
    
    printf("Цифры в обратном порядке: ");
    print_reverse(number);
    printf("\n");
    
    return 0;
}
