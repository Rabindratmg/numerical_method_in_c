#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) a*pow(x,3)+b*pow(x,2)+c*x+d
#define fd(x) 3*a*pow(x,2)+2*b+c
float a,b,c,d;

int main(){
	float x0,x1,f0,f1,fd0,Er,x2;
	printf("Enter cofficent of the polynomial:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	printf("\nEnter intital guess(2):");
	scanf("%f %f",&x0,&x1);
	printf("\n x0 \t\t\t x1 \t\t\t x2 \t\t\t fx(0) \t\t\t f(x1)");
	do{
	
		f0=f(x0);
		f1=f(x1);
		x2=x1-(f1*(x1-x0))/(f1-f0);
		Er=(x2-x1)/x2;
		printf("\n %f \t\t\t %f \t\t\t %f \t\t\t %f \t\t\t %f ",x0,x1,x2,f0,f1);
		x0=x1;
		x1=x2;
	
	
}
	while(fabs(Er)>0.01);
	printf("\nthe root of the given equation is %f",x0);
	return 0;
}
