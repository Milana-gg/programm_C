#include <stdio.h>
#include <stdlib.h>


/* Ââåñòè ñ êîíñîëè ñòðîêó ñèìâîëîâ ïðîèçâîëüíîé äëèíû (äî 80 ñèìâîëîâ). Ïî-ìåíÿòü â íåé âñå ìàëåíüêèå ñèìâîëû 'a' è 'b' íà çàãëàâíûå è âûâåñòè íà êîíñîëü ïîëó-÷åííóþ ñòðîêó.*/

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
