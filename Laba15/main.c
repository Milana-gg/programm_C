#include <stdio.h>
#include <stdlib.h>

/* ���� ����������� ����� N. �������� ��� ��� ����� �� �����, � ������� ������� (� ����� � ��������), �������� �� ��������� ��� ������ ��������.
 ��������: 179 => 1 7 9; 179 => 9 7 1 */

#include <stdio.h>

// ������� ��� ������ ���� ����� � ������� �������
void print_normal(int n) {
    if (n < 10) {
        printf("%d ", n);
    } else {
        // �������� ��� ����� ����� ���������
        print_normal(n / 10);//��������� ����, ��� ������� �������� ���� ����, ��� ������ ����������� �����������
        
        printf("%d ", n % 10);// ����� �������� ��������� �����
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
    
    printf("����� � ������� �������: ");
    print_normal(number);
    printf("\n");
    
    printf("����� � �������� �������: ");
    print_reverse(number);
    printf("\n");
    
    return 0;
}
