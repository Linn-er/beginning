#include<stdio.h>
#define pi 3.14

int main()
{
	double r,h,a,b,c,d,e;
	printf("�뾶�͸߷ֱ�Ϊ:"); 
	scanf("%lf,%lf",&r,&h);
	a=2*pi*r;
	b=pi*r*r;
	c=4*pi*r*r;
	d=4/3.0f*pi*r*r*r;
	e=pi*r*r*h; 
	printf("�ܳ�Ϊ%.2lf\n", a);
	printf("���Ϊ%.2lf\n", b);
	printf("�����Ϊ%.2lf\n", c);
	printf("�����Ϊ%.2lf\n", d);
	printf("Բ�����Ϊ%.2lf\n", e);
	return 0; 	  
 } 
