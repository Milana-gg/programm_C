#include <stdio.h>
#include <stdlib.h>


/* ������ � ������� ������ �������� ������������ ����� (�� 80 ��������). ��-������ � ��� ��� ��������� ������� 'a' � 'b' �� ��������� � ������� �� ������� ����-������ ������.*/

int main(int argc, char *argv[]) {
	char str[81];
	int i=0;
	printf("vvedite ne bolee 80 simvols\n");
	scanf("%s", str);
	while (i<strlen(str)){
		if (str[i]=='a'||str[i]=='b'){
			if (str[i]=='a'){
				str[i]='A';
		
			}
			else{
				str[i]='B';
		    }
		
		}
		i++;
	}
	printf("%s", str);
	return 0;
}
