#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*�������� ������������ ���������� a, b � � � ������ �� ��������. �����������, ��� a, b, c ���� ������������ ����������� ��������� ������� �� ������� �������� �� ���-��� �1, �2. ������� ��������� ����� �������� �������������, ��� ������� ����� ��-��� ������������.
	����������. ��� ���������� ������� ����������� ������� ���������� ����-������� ����� (���������� � �������), � ��� �� ����� ������ �� �������.
	���������� � ������� - ���������� ������������ ����	 math.h � ������-���� ������� pow, ������ ���������� �������� ������ ���� ���������� ��������, � ������ - �������, ��� ������ double.
	����� ������ - ������������ ���� stdio.h, ������� printf, ������ ���������� �������� ��������� ������, � ����������� - ����������, �������� ������� ������-���� �������.
/*
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	double a,b,c; //��������� ������������ ���������� 
	double x1, x2, d;
	//��������� �������� ����������
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

