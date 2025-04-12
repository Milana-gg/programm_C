#include <stdio.h>
#include <stdlib.h>

/* Создать текстовый файл с записями следующего вида:
Иванов Петр Сергеевич 1975
Сидоров Николай Андреевич 1981
….
Воробьянинов Ипполит Матвеевич 1978

	Прочитать данные из этого файла и записать в другой только те строки, которые относятся к родившимся позднее 1980 года. */
#define MAX_LINE 256
#define MAX_NAME 50
int main(int argc, char *argv[]) {
	FILE *input, *output;
	char line[MAX_LINE];
	char surname[MAX_NAME], name[MAX_NAME], patronymic[MAX_NAME];
	int year;
	input = fopen("input_file.txt", "r");
	if(input==NULL){
		printf("mistake");
		return 1;
	}
	output=fopen("output_file.txt", "w");
	while (fgets(line, MAX_LINE, input) != NULL){
		line[strcspn(line, "\n")] = '\0'; /*избавляемся от \n которые оставил fgets*/
		if(sscanf(line, "%s %s %s %d", surname, name, patronymic, &year)==4){
			if(year>1980){
				char result [MAX_LINE];
				snprintf(result, MAX_LINE, "%s %s %s %d\n", surname, name, patronymic, year);
				fputs(result, output);
			}
		}
	}
	fclose(input);
    printf("Processing is completed. The result is written in output_file.docx\n");
	
	return 0;
}
