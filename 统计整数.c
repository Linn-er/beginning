#include<stdio.h>
#include<string.h>//A123x456 17960? 302tab5876
#define N 100

char a[N]="0"; int b[N]={0};int n=0; 

int check(char x)//是数字返回1 
{
	if(x<'0'||x>'9')return(0);
	else return(1);
}
void process(char a[],int b[])
{
	int i,j,now=0,s1=0,s2=-1;//0默认是数字；1不是数字 
	int x=strlen(a); 		
	for(i=0;i<x;i++)
	{
		if(check(*(a+i)))s1=0;
		else s1=-1;
		if(s1==0&&s2!=0)//开始 
		{
			n=n+1;
			*(b+j)=i;
			*(b+j+1)=i;
			j++; 
		}
		if(s1==0&&s2==0)*(b+j)=*(b+j)+1;	
		if(s1!=0&&s2==0)j++;
		s2=s1; 
	} 	
} 

int main()
{
	int k,z; 
//	printf("请输入一个字符串:");
	gets(a);
	process(a,b);
	printf("共有%d个整数\n",n);
	printf("他们分别为:");
	for(k=0;k<2*n;k=k+2)
	{
		for(z=*(b+k);z<*(b+k+1)+1;z++)printf("%d",*(a+z)-'0');
		putchar(' ');
	} 
	putchar('\n');
	return(0);
 } 
