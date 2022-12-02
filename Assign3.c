#include <stdio.h>

int main ()
{    int x, y, z ;
     printf("Enter Number 1:");
      scanf("%d",&x );
	  
	 printf("Enter Number 2:");
     scanf("%d",&y );
	  
	 printf("Enter Number 3:");
     scanf("%d",&z );
	 
	((x>y)&&(x>z)) ? (printf("Maximum number is %d",x)) :\
	((z>y)&&(z>x)) ?( printf("Maximum number is %d",z)):\
	( printf("Maximum number is %d",y)); 
	 
}