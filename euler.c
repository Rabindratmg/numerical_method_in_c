/* Euler method */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x,y) 2*y/x

int main(){
	float x0,y0,h,x,y;
	printf("Enter the intial guess:");
	scanf("%f %f",&x0,&y0);
	printf("Enter the final value of x:");
	scanf("%f",&x);
	printf("Enter the step size:");
	scanf("%f",&h);
	printf("\n x0 \t\t y0 \t\t h");
	while(x0<x){
		y=y0+f(x0,y0)*h;
		x0=x0+h;
		y0=y;
		printf("\n %f \t\t %f \t\t %f  ",x0,y0,h);
	}
	printf("\nthe required value is %f",y);
	return 0;
}
