#include <stdio.h>
int get_max (int x, int y, int z, int s);
int get_min (int x, int y, int z, int s);

int main ()
{  int x,y,z,s ;
   int max , min ;
   printf("please Enter 4 values ");
      scanf("%d%d%d%d",&x,&y,&z,&s);
	  
	 max =get_max (x,y,z,s) ;
     min =get_min (x,y,z,s) ;
	printf("Max number is: %d\n",max);
    printf("Min number is: %d",min);
}
int get_max (int x, int y, int z, int s)
{
	int max =  ((x>y)&&(x>z)) ? x :((z>y)&&(z>x)) ? z: y; 
	return max ;
}

int get_min (int x, int y, int z, int s)
{
	int min =  ((x<y)&&(x<z)) ? x :((z<y)&&(z<x)) ? z: y; 
	return min ;
}