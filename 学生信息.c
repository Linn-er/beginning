#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<string.h>
#define N 4 

struct date
{
	int y;
	int m;
	int d;	
};

struct s
{
	long a;
	char b[10];
	char c;
	struct date birth;
	float score[5]; 
};

struct s S[N];

void input(int x)
{
	int j=0;long a0;char b0[10];char c0;struct date birth0;float score0[5];float k=0;
	printf("请输入第%d个学生的信息\n",x);
	printf("学号:");
	scanf("%ld",&a0);
	getchar();
	printf("姓名:");
	gets(b0);
	printf("性别（M/F):");
	c0=getchar();
	printf("出生年月日为(yyyy.mm.dd):");
	scanf("%d.%d.%d",&birth0.y,&birth0.m,&birth0.d);
	srand(time(NULL));
	for(j=0;j<5;j++)
	{
		score0[j]=rand()%41+60;//60-100的分数 
		k=(int)score0[j]%2==1?0.5:0;
		score0[j]=(int)score0[j]+k;
	}
    S[x-1].a=a0;
    strcpy(S[x-1].b, b0);
    S[x-1].c=c0;
    S[x-1].birth=birth0;
   	for(j=0;j<5;j++)S[x-1].score[j]=score0[j];
}

int main()
{
	int i=0,j=0; 
	printf("***共需要输入%d个学生的信息***\n\n",N);
	do
	{
		i++;
		input(i); 
		if(i!=N)printf("\n\n");
	}while(i<N); 
	printf("\n\t***学生信息一览表***\n"); 
	for(i=0;i<N;i++)
	{
		printf("%d.",i+1);
		printf("%ld   ",S[i].a);
		printf("%s ",&S[i].b);
		if(S[i].c=='M'||S[i].c=='m')printf("\t男 ");
		else  printf("\t女 ");
		printf("\t%d-%02d-%02d ",S[i].birth.y,S[i].birth.m,S[i].birth.d);
		for(j=0;j<5;j++)printf("\t%.1f ",S[i].score[j]); 
		putchar('\n');
	}
	putchar('\n');
	return(0); 
} 
