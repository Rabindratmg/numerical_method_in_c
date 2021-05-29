#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) a*pow(x,3)+b*pow(x,2)+c*x+d
float a,b,c,d;

int main(){
	float x0,x1,x2,f1,f0,f2,fd0;
	printf("Enter cofficent of the polynomial:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	printf("\nEnter intital guess1:");
	scanf("%f",&x1);
	printf("\n Enter anothe guess2:");
	scanf("%f",&x2);
	printf("\n x1 \t\t x2 \t\t x0 \t\t f(x1) \t\t f(x2) \t\t f(x0) \t\t ");
	do{
	
		f1=f(x1);
		f2=f(x2);
		x0=(x1+x2)/2;
		f0=f(x0);
		if(f1*f0<0){
			x2=x0;
		}
		else{
			x1=x0;
		}
		printf("\n %f \t\t %f \t\t %f \t\t %f \t\t %f \t\t %f \t\t",x1,x2,x0,f1,f2,f0);
	
	
}
	while(fabs(f0)>0.001);
	printf("\nthe root of the given equation is %f",x0);
	return 0;
}
