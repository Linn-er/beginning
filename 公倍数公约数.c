#include<stdio.h>	 

int main()
    {
    int a,b,c,d,e,x,y;
    printf("��������������:"); 
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
	if(b>a)
	{
		c=a; 
		a=b;
		b=c; 
	 } 
	 while(b!=0)
	 {
	 	d=a%b;
	 	a=b;
	 	b=d;
	 }
	 printf("���Լ��Ϊ��%d\n",a);
	 e=x*y/a;
	 printf("��С������Ϊ��%d\n",e);
	return 0; 
    }

