#include<stdio.h> 
#define N 5

void exchange(int a[],int x,int y)
{
	int c;
	c=a[x];
	a[x]=a[y];
	a[y]=c;	 
} 

void select(int a[],int n) 
{
	int i,j,k;
	for(i=0;i<n-1;i++)
	{	
		k=i;
		for(j=i+1;j<n;j++)
			if(a[k]>a[j])k=j;
		if(k!=i)exchange(a,k,i); 
	}
}

int main()
{
	int i,a[N];
	printf("请输入%d个整数:",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	select(a,N);
	printf("逆序为:");
	for(i=N-1;i>=0;i--) 
		printf("%d ",a[i]); 
	putchar('\n');
	return(0); 
}


