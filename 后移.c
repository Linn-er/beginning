#include<stdio.h>
#define N 9 

int a[N]={1,2,3,4,5,6,7,8,9};

void process(int a[],int b)
{
	int t,*i;
	t=*(a+b-1);//t��ֵΪ���һ��Ԫ�� 
	for(i=a+b-1;i>a;i--)*i=*(i-1);
	*a=t; 	 	
}

int main()
{
	int i,n; 
	printf("ԭ����:");
	for(i=0;i<N;i++)printf("%d ",*(a+i));
	putchar('\n');
 	printf("������һ������:");
	scanf("%d",&n);
	printf("�仯�������Ϊ:");
	for(i=0;i<(n%9);i++)process(a,N); 
	for(i=0;i<N;i++)printf("%d ",*(a+i)); 
	putchar('\n');
	return(0);
 } 
