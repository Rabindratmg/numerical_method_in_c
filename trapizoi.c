#include<stdio.h>
#include<math.h>
#define y(x) 1/(1+x*x)
void main(){
int i,n;
float a,b,h,integral,x,sum=0; 
printf("\n Trapezoidal Rule to solve integration");
printf("\n Enter no of intervals : ");
scanf("%d", &n);
printf("\n Enter upper limit : ");
scanf("%f", &b);
printf("\n Enter lower limit : ");
scanf("%f", &a);
h=(b-a)/n;
printf("\n h=%f",h);
for(i=1;i<n;i++){
x=a+(i*h);
sum=sum+y(x);
printf("\n x: %f and f(%f) = %f",x,x,y(x));
}
integral=h/2.0*(y(a)+(2*sum)+y(b));
printf("\n\n The required integration is:%f",integral);
}
