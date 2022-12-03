#include <stdio.h>

int main ()
{   int arr[10] ,i ;
    
	
  printf("Enter 10 values :\n");
  for(i=0 ; i<10 ; i++)
  { 
      scanf("%d",& arr[i]);  
  }
  int max=0,min=arr[0] ; 
 for(i=0 ; i<10 ; i++)
  {  if(arr[i] > max )
	  { 
         max= arr[i];
		  
	  }
	 if(arr[i+1] < min )
	  { 
		 min = arr[i+1];  
	  } 
  }

    printf("The max values is: %d\n",max);
	printf("The min values is: %d\n",min);


}
