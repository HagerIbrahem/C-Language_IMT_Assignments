#include <stdio.h>

int main ()
{    
     int ID, i, ID1=1234 ,ID2=5678 ,ID3=9870 ;
     int Password ,Password1=7788 ,Password2=5566 ,Password3=1122 ;
	 
	 printf("please Enter Your ID");
      scanf("%d",&ID );

    if(ID==ID1)	
	{ 
       printf("please Enter Your Password");
       for (i=0 ; i<3 ;i++)
		{  scanf(" %d",&Password );
	       if(Password ==Password1 )
		   { printf("Hello, Ahmed ");
		     break;
		   }
	       else
		    printf("Try again");
	     	if(i==2)
		    printf("Incorrect password for 3 times. No more");
		}	
	}
    else if(ID==ID2)	
	{
	  printf("please Enter Your Password");
       for (i=0 ; i<3 ;i++)
	    { 
             scanf(" %d",&Password );
	       if(Password ==Password1 )
		   { printf("Hello, Amr ");
		     break;
		   }
	       else
		    printf("Try again");
		if(i==2)
	    printf("Incorrect password for 3 times. No more");
	     }	
	}

    else if(ID==ID3)	
	{
	  printf("please Enter Your Password");
       for (i=0 ; i<3 ;i++)
		{  
             scanf(" %d",&Password );
	       if(Password ==Password1 )
		   { printf("Hello, Ahmed ");
		     break;
		   }
	       else
		    printf("Try again");
		
		  if(i==2)
		     printf("Incorrect password for 3 times. No more");
	     }	
	}		
   	else 
		printf("You are not registered");
}