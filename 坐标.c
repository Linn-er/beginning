#include<stdio.h>
#include<math.h>

int main()
{
	int x,y,a,b;
	printf("坐标为:");
	scanf("%d,%d",&x,&y);
	if((fabs(x)<=3)&&(fabs(x)>=1))
		{
			a=fabs(x);
			b=fabs(y);
			if((a-2)*(a-2)+(b-2)*(b-2)<=1)printf("高度为10m\n");
			else printf("高度为0\n"); 
		} 
	else printf("高度为0\n");
	return 0;
}
