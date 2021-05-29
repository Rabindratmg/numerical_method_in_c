#include<stdio.h>
#include<conio.h>
#include<math.h>
#define y(x) x*x*x

void main()
{
	int i,n;
	float a,b,h,integral,x,sum=0;
	printf("\n simpson's 3/4rd rule to solve integration");
	printf("\n enter no of intervals");
	scanf("%d", &n);
	printf("\n enter upper limit");
	scanf("%f", &b);
	printf("\n enter lower limit");
	scanf("%f", &a);
	
	h=(b-a)/n;
	sum=y(a)+y(b);
	printf("\nthe sum of the interval is %f",sum);
	for(i=1;i<n;i++){
		a=a+h;
		if(i%2==0){
			sum=sum+2*y(a);
			printf("\nthe sum of the interval is %f",sum);
		}
		else if(i%2==1){
			sum=sum+4*y(a);
			printf("\nthe sum of the interval is %f",sum);
		}
	}
	printf("\nthe sum of the interval is %f",sum);
	integral=(h*sum)/3.0;
	printf("\nthe required integration is %f",integral);


}
