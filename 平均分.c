#include<stdio.h>
#define M 3
#define N 5 

float score[M][N]={{70,70,70,70,70},{70,70,99.5,70,70},{70,70,70,70,70}};
char o[5];int i,j,n,c,x,y;float k,sum1,sum2;double p; 
float ave_s[M],ave_c[N];

void ave1(float d1[][N],float d2[])
{
	for(i=0;i<M;i++)
	{	
		sum1=0;
		for(j=0;j<N;j++)sum1+=d1[i][j]; 
		k=sum1/N;
		ave_s[i]=k; 
		printf("��%d��ѧ����ƽ����Ϊ:%.1f\n",i+1,k);
	} 
	puts(o); 
} 

void ave2(float d1[][N],float d2[])
{
	for(i=0;i<N;i++)
	{	
		sum1=0;
		for(j=0;j<M;j++)sum1+=d1[j][i]; 
		k=sum1/M; 
		printf("��%d�ſε�ƽ����Ϊ:%.1f\n",i+1,k);
	} 
	puts(o); 
}

void highest(float d[],int n)
{
	k=0;
	for(i=0;i<n;i++)//�ҳ���߷ֺ����±� 
	{
	 	if(d[i]>k)
		{
			k=d[i];
			c=i; 
		}
	} 
		x=c/N;
		y=c%N;
		printf("��ߵķ���Ϊ:%.1f,�ǵ�%d��ѧ���ĵ�%d�ſ�\n",k,x+1,y+1);
		puts(o); 
}

double var(float d[],int n)
{
	sum1=0; 
	for(i=0;i<n;i++)sum1+=d[i]*d[i]; 
	sum2=0; 
	for(i=0;i<n;i++)sum2+=d[i];
	p=sum1/n-(sum2/n)*(sum2/n);
	return(p); 
}

int main()
{
	printf("       ");
	for(j=0;j<N;j++)printf("�γ�%d  ",j+1);
	putchar('\n');
	for(i=0;i<M;i++)
	{
		printf("ѧ��%d",i+1);
		for(j=0;j<N;j++)printf("%7.1f",score[i][j]);
		putchar('\n');
	}
	puts(o); 
	ave1(score,ave_s);
	ave2(score,ave_c);
	highest(score[0],M*N);
	p=var(ave_s,M);
	printf("ѧ��ƽ���ֵķ���Ϊ:%.3lf\n",p);
	return(0);
 } 
