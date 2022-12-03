#include <stdio.h>

int main ()
{  
   int x, y,z;
   printf("Enter 3 values :");
   scanf(" %d%d%d",&x,&y,&z);
   
   int * p=&x;
   int * q=&y;
   int * r=&z;
   int *temp;   
   
    printf("value of x = %d\n",x);
    printf("value of y = %d\n",y);
    printf("value of z = %d\n",z);
	 
	 printf("value of p = %p\n",p);
	 printf("value of q = %d\n",q);
     printf("value of r = %d\n",r);
		
	printf("value of *p = %d\n",*p);
	printf("value of *q = %d\n",*q);
	printf("value of *r = %d\n",*r);
	
	printf("swapping pointers\n");
	 
	temp=r;
	r=p;
	p=q;
	q=temp;
   
    printf("value of x = %d\n",x);
    printf("value of y = %d\n",y);
    printf("value of z = %d\n",z);
	 
	 printf("value of p = %p\n",p);
	 printf("value of q = %d\n",q);
     printf("value of r = %d\n",r);
		
	printf("value of *p = %d\n",*p);
	printf("value of *q = %d\n",*q);
	printf("value of *r = %d\n",*r);

}