#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

double **matrix(int n, double **m1, double **m2, char operation) {
    int i, j, k;
    double **result = (double **)malloc(n * sizeof(double *));

    for (i = 0; i < n; i++) {
        result[i] = (double *)malloc(n * sizeof(double));
    }

    if (operation == '+') {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                result[i][j] = m1[i][j] + m2[i][j];
            }
        }
    } 
	if (operation == '-') {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                result[i][j] = m1[i][j] - m2[i][j];
            }
        }
    } 
	if (operation == '*') {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                result[i][j] = 0.0;
                for (k = 0; k < n; k++) {
                    result[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
    }

    return result;
}
