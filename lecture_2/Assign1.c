#include <stdio.h>

int main ()
{   int i, num , count=0;
    int arr [10];
   for(i=0 ; i<10 ; i++)
   {
	  printf("Enter Number %d:", i+1);
      scanf("%d", &arr[i]);	    
   }
   
    printf("Enter the value to search:");
      scanf("%d", &num);
    
   	for(i=0 ; i<10 ; i++)
   {  if (arr[i]== num )
	   { printf("value is exist at element number %d\n", i+1);
       count+=1 ; 
       } 
   }
    if(count ==0){
		printf("nmber no exist");
	}
	
}