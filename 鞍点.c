#include<stdio.h>

//int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}} ;
//int a[3][4]={{1,2,3,13},{5,6,8,7},{9,10,11,12}} ;
int a[3][4]={{12,11,10,9},{8,7,6,5},{4,3,2,1}} ;

int main()
{
	int i,j,m,n;
	printf("原数组为:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)	
			printf(" %-5d",a[i][j]);
		putchar('\n'); 	                                                                                               
	} 
	for(i=0;i<3;i++)//i表示行 
	{	
		m=0; 
		for(j=1;j<4;j++)	
			{
				if(a[i][m]<a[i][j])m=j; 								
			}//找到每行最大数所在列的下标 
		n=0;
		for(j=1;j<3;j++)
			{
				if(a[n][m]>a[j][m])n=j; 								
			}//找到该列最小数所在行的下标
		if(n==i)
		{
			printf("鞍点为%d，在第%d行第%d列上\n",a[n][m],n+1,m+1);
			break; 
		}                                                                                              
	    if(i==2&&n!=2)
		{
			printf("无鞍点\n"); 
			break;	
		}
	} 	
	return(0); 
}

