#include <stdio.h>
#include <stdlib.h>

int main(){
	int N=3;
	int M=2;
	int i; int j; int k; 
	double arr[N][N];
	for (i=0; i<N; i++){
		for (j=0; j<N; j++){
			scanf("%lf", &(arr[i][j]));
		}
	}
	double sum=0;
	double mus=0;
	for (i=0; i<N; i++){
		sum+=arr[i][i];
		mus+=arr[i][N-i-1];
	}
	for (i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%.1lf ", arr[i][j]);
		}
		printf("\n");
	}
	printf("%.1lf%s%.1lf", sum, "\n", mus);
	
	int ar[M][M];
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			scanf("%d", &(ar[i][j]));
		}
	}
	int ark[M][M];
	for (i=0; i<M; i++){
		for(j=0; j<M; j++){
			ark[i][j]=0;
			for(k=0; k<M; k++){
				ark[i][j] += ar[i][k] * ar[k][j];
			}
		}
	}
	for (i=0; i<M; i++){
		for(j=0; j<M; j++){
			printf("%d ", ark[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}


