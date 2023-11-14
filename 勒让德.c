#include<stdio.h>

double x,ans;
int n; 

double process(int a,double b)//aÎªn£¬bÎªx 
{
	double i,j;
	if(a==0)
		return(1); 
	else if(a==1)
		return(b);
	else 
	{
		i=process(a-1,b);
		j=process(a-2,b);
		return(((2*a-1)*b*i-(a-1)*j)/a); 
	} 	
 } 

int main()
{
	printf("ÇëÊäÈëx,n:");
	scanf("%lf,%d",&x,&n);
	ans=process(n,x);
	printf("ans=%lf\n",ans);
	return(0);
}
