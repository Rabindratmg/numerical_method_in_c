/* program for lagranges interpolation */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 100

int main(){
	float x[max],y[max],sum,p,x1;
	int i,n,j;
	printf("Enter the size of data:");
	scanf("%d",&n);
	printf("Enter the value of x:");
	scanf("%f",&x1);
	for(i=0;i<n;i++){
		printf("Enter the value of x:");
		scanf("%f",&x[i]);
		printf("Enter the value of y:");
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++){
		p=1;
		for(j=0;j<n;j++){
			if(j!=i){
				p= p*((x1-x[j])/(x[i]-x[j]));
			}
		}
		sum+=p*y[i];
	}
	printf("the required interpolated value is %f", sum);
	return 0;
}

