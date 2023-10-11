#include<stdio.h>

int main()
{
	int p,a;
	printf("利润为"); 
	scanf("%d",&p); 
	if(p<=100000)a=p*0.1;
	else if(p>100000&&p<=200000)a=10000+(p-100000)*0.075;
	else if(p<=400000)a=17500+(p-200000)*0.05;
	else if(p<=600000)a=27500+(p-400000)*0.03;
	else if(p<=1000000)a=33500+(p-600000)*0.015;
	else if(p>1000000)a=39500+(p-1000000)*0.01;
	printf("奖金为%d\n",a);
	return 0;
}
