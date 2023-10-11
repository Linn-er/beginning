#include<stdio.h>

int main()
{
	int p,a,b;
	printf("利润为"); 
	scanf("%d",&p);
	b=p/100000;
	switch(b)
	{
		case 0:a=p*0.1;break;	
		case 1:a=10000+(p-100000)*0.075;break;
		case 2:
		case 3:a=17500+(p-200000)*0.05;break;
		case 4:
		case 5:a=27500+(p-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:a=33500+(p-600000)*0.015;break;
		default:a=39500+(p-1000000)*0.001;break;
	}	 
	printf("奖金为%d\n",a);
	return 0;
}
