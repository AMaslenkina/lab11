#include <stdio.h>
#include <stdlib.h>

#define N 3
#define N1 N+1

float arr[N][N1] = { {0.14, 0.24, -0.84, 1.11},
					 {1.07, -0.83, 0.56, 0.48}, 
					 {0.64, 0.43, -0.38, -0.83} 
					} ;

int main() {

int tmp,x1,x2,x3;
int i,j,xx[i];

float tmpB[N][N1];
float C[N], B[3];

for (i = 0; i < N ; i++) {
	for (j = 0; j < N1 ; j++)
printf ("%0.2f\t",arr[i][j]);
printf ("\n");
}

for (i = 0 ; i < N ; i++)

	for (j = 0; j < N1; j++){
		tmpB[i][j] = -arr[i][j] / arr[i][i];
		tmpB[i][3]*= -1;
if (tmpB[i][j] == -1)
	tmpB[i][j] = 0;

C[i]=tmpB[i][N];
}

printf("\nRez:\n");
	for (i=0;i < N;i++)
		printf("X%d=%f\n",i+1, C[i]);
return 0;
}
