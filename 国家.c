#include<stdio.h> 
#include<string.h>
#define N 7

char nation[][4]={"CHN", "CAN", "USA", "RUS", "AUS", "KOR", "JPN"};
char* p[N]={0};//指针数组 

void swap(char *p[],int x,int y)
{
	char* t=*(p+y);
	*(p+y)=*(p+x);
	*(p+x)=t;
}

void bubble(char* p[N])
{
	int i,k;
	for(i=1;i<N;i++)
	{
		for(k=0;k<N-i;k++)
			if(strcmp(*(p+k),*(p+k+1))>0) swap(p,k,k+1);
	}
}

//void select(char *p[])		
//{ 
//	int i,j;
//	for(i=0;i<N;i++)
//	{
//		for(j=i+1;j<N;j++)	
//			if(strcmp(*(p+j),*(p+i))>0) swap(p,j,i);		
//	}
//}

int main()
{
	printf("排序前,二维数组的数据为：\n");
	int i=0,j=0;
	char (*p1)[4]=&nation[0];;
	for(i=0;i<N;i++)
	{
		*(p+i)=*(p1+i);
		for(j=0;j<3;j++)printf("%c",*(*(p1+i)+j));
		putchar(' ');
	}
	putchar('\n');
	printf("排序后,指针数组指向的数据为：\n");
	bubble(p);
//	select(p); 
	for(i=0;i<N;i++)
	{
		for(j=0;j<3;j++)printf("%c",*(*(p+i)+j));
		putchar(' ');
	}
	putchar('\n');
	return(0);
}




