#include<stdio.h>
#include<math.h>

int main()
{
	int x,y,a,b;
	printf("����Ϊ:");
	scanf("%d,%d",&x,&y);
	if((fabs(x)<=3)&&(fabs(x)>=1))
		{
			a=fabs(x);
			b=fabs(y);
			if((a-2)*(a-2)+(b-2)*(b-2)<=1)printf("�߶�Ϊ10m\n");
			else printf("�߶�Ϊ0\n"); 
		} 
	else printf("�߶�Ϊ0\n");
	return 0;
}
