#include<stdio.h>
#define N 9 

int a[N]={1,2,3,4,5,6,7,8,9};

void process(int a[],int b)
{
	int t,*i;
	t=*(a+b-1);//t的值为最后一个元素 
	for(i=a+b-1;i>a;i--)*i=*(i-1);
	*a=t; 	 	
}

int main()
{
	int i,n; 
	printf("原数组:");
	for(i=0;i<N;i++)printf("%d ",*(a+i));
	putchar('\n');
 	printf("请输入一个整数:");
	scanf("%d",&n);
	printf("变化后的数组为:");
	for(i=0;i<(n%9);i++)process(a,N); 
	for(i=0;i<N;i++)printf("%d ",*(a+i)); 
	putchar('\n');
	return(0);
 } 
