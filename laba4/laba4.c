#include <stdio.h>
#include <stdbool.h>
#include "tr.h"
#include <math.h>

/* �������� �������, ����������� �������� � ������� ������������ �� ��������� ���� ��� ��� ������. ���������� �� � ��������� ������ 
(�������� �� ����, ��� �����-�������� ������� main( )). ������ � ������� �������� ���� ������ ������������ (� ��������� �� ������������ ����������� ������������)
 � ������ �� ������� ��������-��� � ������� ���������� ������� �������� ��� ��������� � �������. */
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
