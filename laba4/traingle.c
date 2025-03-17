#include <stdbool.h>
#include <math.h>
double perim(double side1, double side2, double side3){
	return side1+side2+side3;
}

double pl(double side1, double side2, double side3){
	double p=perim(side1,side2,side3);
	return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}

bool IsTriangle(double side1, double side2, double side3){
	if (((side1+side2)>side3)&&((side2+side3)>side1)&&((side1+side3)>side2)&& side1> 0 && side2 > 0 && side3 > 0){
		return true;
	}
	else{
		return false;
	}
}
