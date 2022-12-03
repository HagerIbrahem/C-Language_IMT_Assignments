#include <stdio.h>

void sort_func (int *ptr , int size);

int main ()
{   int arr [4] , i;
    printf("Enter elements of array:\n");
	
   for (i=0 ; i<4 ; i++)
   { 
	   scanf("%d",&arr[i]);
	   
   }
    
  sort_func( arr , 4);
  printf("******** After bubble sortig ********\n");
  
  for (i=0 ; i<4 ; i++)
   { 
	   printf("element %d is: %d\n",i+1,arr[i]);
	   
   }
}

void sort_func (int *ptr , int size)
{ int i , j ;
  for(i=0 ; i<size-1 ;i++)
  {
	 for (j=0 ; j<size -1-i; j++)
	 {   int temp ;
 
       if((*(ptr+j))>(*(ptr+j+1)))
	   {
           temp=*(ptr+j);
		  *(ptr+j)= *(ptr+j+1);
		  *(ptr+j+1) = temp ; 
	   } 
	 }		 
	   
   }
	
}