#include<stdio.h>
#define N 10

int main()
{
	int i=1,a,max,j=1; 
	printf("����%d��������",N);
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
    printf("���ֵ��%d\n",max);
    printf("�ڵ�%d��\n",j); 
	return 0; 
}

