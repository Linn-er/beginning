#include<stdio.h> 

int a[8]={2,3,5,7,8,9,11};

int bitsearch(int a[],int n,int x) 
{
	int bot=0,top=n-1,mid;
	do 
	{ 
		mid=(bot+top)/2;
		if(x==a[mid])return(mid+1);
		else if(x>a[mid])bot=mid+1;
		else top=mid-1;
	}while(bot<=top);
	return(bot);			 
} 


int main()
{
	int i,b,n=7,k,j; 
	printf("原数组为:");
	for(i=0;i<7;i++) 
		printf("%d ",a[i]);
	putchar('\n');
	printf("请输入你想要插入的数据：");
	scanf("%d",&b);
	k=bitsearch(a,n,b);
	for(j=n;j>k;j--)
		a[j]=a[j-1]; 
	a[k]=b;
	printf("插入后的数组为：");
	for(i=0;i<8;i++) 
		printf("%d ",a[i]); 
	putchar('\n');
	return(0); 
	 
}
