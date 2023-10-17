#include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("请输入一个整数(1<=N<=20):");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			putchar(' ');
		} 
		for(k=1;k<=2*i-1;k++)
		{
			putchar('*');
		 } 
		putchar('\n'); 
	} 
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{ 
			putchar(' ');
		} 
		for(k=1;k<=2*i-1;k++)
		{
			putchar('*');
		} 	
		putchar('\n');	
	}
	return 0; 	 
}
