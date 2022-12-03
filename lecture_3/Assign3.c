#include <stdio.h>

int main ()
{  
      int h,i, j;
    printf("please enter the hieght of the pyramid :");
      scanf("%d",&h);
	 // int width=h+(h-1);
	 
for (i = 0; i < h; i ++)
	{
		for (j=0; j<h-1-i; j++)
		{
			printf(" ");
		}
		
		for (j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}


   
}