#include "Func.h"
int i;
int sum_find(int count, int numbers[]){
	int sum=0;
	
	for(i=0; i<count; i++){
		sum+=numbers[i];
	}
	return sum;
}
 int max_find(int count, int numbers[]){
 	int max=numbers[0];
	for (i=0; i<count; i++){
		if(numbers[i]>max){
			max=numbers[i];
		}
	}
	return max;	
 }
 int min_find(int count, int numbers[]){
 	int min=numbers[0];
	for (i=0; i<count; i++){
		if(numbers[i]<min){
			min=numbers[i];
		}
	}
	return min;	
 }
 double average_find(int count, int numbers[]){
 	int sum = sum_find(count, numbers);
 	return (double)sum/count;
 }
