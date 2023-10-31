#include<stdio.h>
#define N 9999 
 
int a[N+1];//初始为0，种子活着-0 

int main()
{
	int i,j,add=0; 
	for(i=3;i*i<N;i+=2)
	{
		if(a[i]) continue;//等于1时，已经死了，倍数也处理过，跳过 
		for(j=i*i;j<=N;j+=2*i)//把该种子的倍数全部杀死
			if(!a[j])a[j]=1;//种子的倍数死去-1 		 
	}
	for(i=3;i<=N;i+=2) if(!a[i]) add++; 
	if(N>1) add++;
	printf("%d(含)以内共有%d个素数\n",N,add);
	return(0); 	
}
