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
		for(j=0;j<i;j++)//�������бȽ� // 
		{
			k=strcmp(a[i],b[j]);
			if(k<0)
			{
				for(n=i;n>j;n--)strcpy(b[n],b[n-1]);//���� 
				strcpy(b[j],a[i]);//����//Ϊ������±� 
				break; 
			}
		}
	} 
}

int main()
{
	printf("ԭ����Ϊ:\n");
	for(i=0;i<N;i++)puts(ch1[i]);
	process(ch1,ch2);
	printf("������Ϊ:\n");
	for(i=0;i<N;i++)puts(ch2[i]);
	return(0); 
 } 
