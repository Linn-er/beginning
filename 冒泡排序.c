#include<stdio.h> 
#define N 10

void exchange(int a[],int x,int y)
{
	int c;
	c=a[x];
	a[x]=a[y];
	a[y]=c;	 
} 

void bubble(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
			{
				if(a[j]>a[j+1])
					exchange(a,j,j+1);
			}
	}
}


int main()
{
	int i,a[N]; 
	printf("������%d������:",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	bubble(a,N);
	printf("����Ϊ:");
	for(i=0;i<N;i++) 
		printf("%d ",a[i]); 
	putchar('\n');
	return(0); 
	
 } 
