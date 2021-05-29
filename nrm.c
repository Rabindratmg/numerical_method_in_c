#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) a*pow(x,3)+b*pow(x,2)+c*x+d
#define fd(x) 3*a*pow(x,2)+2*b+c
float a,b,c,d;

int main(){
	float x0,x1,f0,fd0,Er;
	printf("Enter cofficent of the polynomial:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	printf("\nEnter intital guess:");
	scanf("%f",&x0);
	printf("\n x0 \t\t\t x1 \t\t\t fx(0) \t\t\t Error\t\t\t");
	do{
	
		f0=f(x0);
		fd0=fd(x0);
		x1=x0-(f0/fd0);
		Er=(x1-x0)/x1;
		printf("\n %f \t\t\t %f \t\t\t %f \t\t\t %f\t\t\t",x0,x1,f0,Er);
		x0=x1;
	
	
}
	while(fabs(Er)>0.01);
	printf("\nthe root of the given equation is %f",x0);
	return 0;
}
