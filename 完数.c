#include<stdio.h>

int main()
{
	int x=2,i,c,bite;
	printf("1000000(含)以内的完数有：\n");
	while(x<=1000000) 
	{
		i=1;
		c=0; 
		if(x>6)
		{
			while(x%4!=0)x++;
			if(x>496)
			{
				while(x%16!=0)x++;
				if(x>8128)
				{
					while(x%64!=0)x++;
					if(x>32512)
					{
						while(x%128!=0)x++;
						if(x>130048)
						{
							while(x%256!=0)x++;
							if(x>520192)
							{
								while(x%512!=0)x++;
							}  
						} 
						
					}
				} 
			}   
		} 
		while(i<(x/2+1))
		{
			if(x%i==0)c=c+i; 
			i++;
		}
		
		if(c==x)
		{
			bite++; 
			printf("%-8d因子为:",x);
			i=1;
			while(i<(c/2+1)) 
			{
				if(i==x/2)printf("%d",i);
				else if(x%i==0)
				{
					printf("%d,",i);
					if(i>1)i=i*2-2;
				}
				i++;	 
			}
			printf("\n");
		}
		x++;	
	}
	printf("共有%d个完数！\n",bite); 
	return(0);	
} 
