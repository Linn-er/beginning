#include<stdio.h>
#define N 100

void process(int a,int b)
{
	int state[N]={0};
	int out=0,count=0,now=0;
	while(out<a)
	{
		if(now>a-1)now=0; 
		if(state[now]==0)count++;
		if(count==b)
		{
			state[now]=1;
			printf("%3d ",now+1);
			out++;
			if(out%10==0)putchar('\n');
			count=0;
		}
		now++;
	}
	if(a%10!=0)putchar('\n'); 
}

int main()
{	
	int n=0,m=0;
	printf("请输入人数(1--100):");
	scanf("%d",&m);
	printf("请输入报数(1--10):");
	scanf("%d",&n);
	printf("离开顺序为:\n");
	process(m,n); 
	return(0);
} 
