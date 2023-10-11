#include<stdio.h>
#define N 10

int main()
{
	int i=1,a,max,j=1; 
	printf("输入%d个整数：",N);
	scanf("%d",&max);
	while(i<N)
	{	
		scanf("%d",&a);
		i++;
	    if(a>=max)
	    {
            max=a;
	    	j=i;
	    }      
	}
    printf("最大值是%d\n",max);
    printf("在第%d个\n",j); 
	return 0; 
}

