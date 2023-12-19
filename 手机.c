#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#define N 4 
#include<string.h>

struct phone
{
	char a[10];
    int b[13];
}; 

struct date
{
	char f[10];
    int g; 
}; 

struct phone p[N];
struct date q[N]; 

void bubble(int l)
{
    int i=0,j=0; 
    for(i=0;i<l-1;i++) 
	{
        for(j=0;j<l-i-1;j++)
		{
            if(q[j].g<q[j+1].g) 
			{
              struct date z;
              z=q[j];
              q[j]=q[j+1];
              q[j+1]=z;
            }
        }
    }
}

void way(struct phone p[],int d) 
{
	int i=0,k=0;
	char *brand[] = {"华为", "OPPO", "小米", "VIVO"};
	for(i=0;i<d;i++)strcpy(p[i].a, brand[i]);
	for(i=0;i<d;i++)
	{ 
		srand((time(NULL)+i));
		for(k=1;k<13;k++)
		{
		  p[i].b[k]=(rand()+(1025*i+500))%2000+1000; 
		  p[i].b[0]=p[i].b[0]+p[i].b[k];
		} 
	} 
}

int main()
{
	int i=0,k=0,n=-2; 
	way(p,N);
	for(i=0;i<N;i++)
	{
		printf("%d    ",i+1);
		printf("%s ",p[i].a);
		for(k=1;k<13;k++)printf("\t%d ",p[i].b[k]); 
		printf("\t%d ",p[i].b[0]); 
		putchar('\n');
	}
	putchar('\n');
	do
	{
		printf("请输入一个整数n(-1<=n<=12,-1是退出):");
		n=-2; 
		scanf("%d",&n);
		while (getchar() != '\n');
		if(n>12||n<-1)printf("错误！请再次输入\n");
		else if(n!=-1) 
		{
			for(i=0;i<N;i++)
			{
				strcpy(q[i].f,p[i].a);
				q[i].g=p[i].b[n];
			}
			bubble(N);	
			for(i=0;i<N;i++)		
			{
				printf("%d    ",i+1);
				printf("%s ",q[i].f);
				printf("\t%d \n",q[i].g);
			}
			putchar('\n'); 
		} 
	}while(n!=-1) ;	
	return(0);
 } 
