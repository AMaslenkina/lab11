#include "stdlib.h"
#include "stdio.h"

int main(){
	int i,j,n,itr=0,k=0,q;
	float a[10][10],x[10],b[10],sum[5],temp;
	printf("Vvedite tochnost' izmereniya \n");
	scanf("%d",&q);
	printf("Vvedite razmernost' matrici \n");
	scanf("%d",&n);
	printf("Vvedite elementy matrici \n ");
	for (i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
			{
			printf("a[%d][%d]=", i,j);
			scanf("%f",&a[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<n;i++)
		{
		printf("x[%d]=", i);
			scanf("%f",&x[i]);
		}
		
	for (i=0;i<n;i++)
		{
		x[i]=x[i]/a[i][i];
		b[i]=x[i];
		for(j=0;j<n;j++)
			{
			a[i][j]=-a[i][j]/a[i][i];
		}
	}
	
do{
	for(i=0;i<n;i++)
        {	
			for(j=0;j<n;j++)
            	{
             	sum[i]+=x[j]*a[i][j];
           		}
        };
    for(k=0;k<n;k++)
        {
        	x[k]=sum[k]+b[k];
		}
	itr++;
}
while (itr <= q);
	for (i = 0;i < n; i++)
		printf( "\n x[%d] = %f",i,x[i]);
return 0 ;
}
