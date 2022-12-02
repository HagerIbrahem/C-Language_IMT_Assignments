#include <stdio.h>

int main ()
{    
     int ID, ID1=123 ,ID2=345 ,ID3=567 ;
     int Password ,Password1=123 ,Password2=345 ,Password3=567 ;
	 
	 printf("Enter Your ID");
      scanf("%d",&ID );

    if(ID==ID1)	
	{
	 printf("Enter Your Password");
      scanf(" %d",&Password );
	  if(Password ==Password1 )
		  printf("Hello, Ahmed ");
	  else
		  printf("Incorrect Password");
	}		
   
    else if(ID==ID2)	
	{
	 printf("Enter Your Password");
      scanf("%d",&Password );
	  if(Password ==Password2 )
		  printf("Hello, Hany ");
	  else
		  printf("Incorrect Password");
	}

    else if(ID==ID3)	
	{
	 printf("Enter Your Password");
      scanf("%d",&Password );
	  if(Password ==Password3 )
		  printf("Hello, Hajer ");
	  else
		  printf("Incorrect Password");
	}		
   	else 
		printf("Incorrect ID");
}