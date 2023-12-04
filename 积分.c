#include<stdio.h>
#define N 10000000
#include<math.h>

double f1(double x)
{
	return(sin(x));
}

double f2(double x)
{
	return(cos(x));
}

double f3(double x)
{
	return(exp(x)+1);
}

void menu(int n)
{
	double a,b,(*p)(double),h,s=0;int i;
	printf("Please input lower and upper:");
	scanf("%lf,%lf",&a,&b);
	switch(n)
	{
		case 1:p=f1;break;
		case 2:p=f2;break;
		case 3:p=f3;
	}
	h=(b-a)/N;//区间被分为小块 
//	for(i=0;i<N;i++)s+=h*(*p)(a+i*h);
	for(i=0;i<N;i++)s+=h*((*p)(a+i*h)+(*p)(a+(i+1)*h))/2;
	printf("结果为：%.10lf\n",s);
	putchar('\n');
}

int main()
{
	int n=-1;
    do
	{ 
		printf("1.sin(x)   2.cos(x)   3.exp(x)+1   0.exit\n");
		printf("Please choose one:");
		scanf("%d",&n);
		while(n<0||n>3)
		{
			while(getchar()!='\n');
			printf("Error!Please input again:");
			scanf("%d",&n);
		}
		if(n!=0)menu(n);
	}while(n!=0); 	
	return(0);
 } 
