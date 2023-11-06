#include<stdio.h>
#include<string.h>
#define N 4 

char ch1[N][20]={"Zhao","Qian","Sun","Li"}; 
char ch2[N][20];
int i,j,k,n; 

void process(char a[][20],char b[][20])
{
	strcpy(b[0],a[0]);
	for(i=1;i<N;i++)
	{
		for(j=0;j<i;j++)//已排序中比较 // 
		{
			k=strcmp(a[i],b[j]);
			if(k<0)
			{
				for(n=i;n>j;n--)strcpy(b[n],b[n-1]);//后移 
				strcpy(b[j],a[i]);//插入//为插入的下标 
				break; 
			}
		}
	} 
}

int main()
{
	printf("原数组为:\n");
	for(i=0;i<N;i++)puts(ch1[i]);
	process(ch1,ch2);
	printf("升序结果为:\n");
	for(i=0;i<N;i++)puts(ch2[i]);
	return(0); 
 } 
