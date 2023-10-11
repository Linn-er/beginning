#include<stdio.h>
#define pi 3.14

int main()
{
	double r,h,a,b,c,d,e;
	printf("半径和高分别为:"); 
	scanf("%lf,%lf",&r,&h);
	a=2*pi*r;
	b=pi*r*r;
	c=4*pi*r*r;
	d=4/3.0f*pi*r*r*r;
	e=pi*r*r*h; 
	printf("周长为%.2lf\n", a);
	printf("面积为%.2lf\n", b);
	printf("球面积为%.2lf\n", c);
	printf("球体积为%.2lf\n", d);
	printf("圆柱体积为%.2lf\n", e);
	return 0; 	  
 } 
