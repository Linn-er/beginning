#include<stdio.h>
int main()
{   
    int a,b,c;
    int d=0;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)
	{
	    if(a>c)d=a; 	
	    else d=c;
	}
	else
	{ 
	  if(b>c)d=b;
	  else d=c;
	}  
  	printf("最大值为%d\n",d);
	return 0;
}

