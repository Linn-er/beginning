#include<stdio.h>
#define N 9999 
 
int a[N+1];//��ʼΪ0�����ӻ���-0 

int main()
{
	int i,j,add=0; 
	for(i=3;i*i<N;i+=2)
	{
		if(a[i]) continue;//����1ʱ���Ѿ����ˣ�����Ҳ����������� 
		for(j=i*i;j<=N;j+=2*i)//�Ѹ����ӵı���ȫ��ɱ��
			if(!a[j])a[j]=1;//���ӵı�����ȥ-1 		 
	}
	for(i=3;i<=N;i+=2) if(!a[i]) add++; 
	if(N>1) add++;
	printf("%d(��)���ڹ���%d������\n",N,add);
	return(0); 	
}
