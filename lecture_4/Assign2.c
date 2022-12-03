#include <stdio.h>
int add      (int x, int y);
int sub      (int x, int y);
int multi    (int x, int y);
int Divide   (int x, int y);
int And      (int x, int y);
int XOR      (int x, int y);
int OR      (int x, int y);
int Reminder (int x, int y);
          
int Not      (int x);
int Increment(int x);
int Decrement(int x);

int main ()
{  printf("ID    Operation     Number of operands\n");
   printf("1     Add                 2           \n");
   printf("2     Sub                 2           \n");
   printf("3     Multi               2           \n"); 
   printf("4     Divide              2           \n");
   printf("5     And                 2           \n");
   printf("6     XOR                 2           \n");
   printf("7     OR                  2           \n");
   printf("8     Reminder            2           \n");
   printf("9     Not                 1           \n");
   printf("10    Increment           1           \n");
   printf("11    Decrement           1           \n");


   int ID,x ,y,result;
    printf("Enter operation ID :");
    scanf("%d",&ID);
	switch(ID)
	{ case 1:
	  case 2:
	  case 3:
	  case 4:
	  case 5:
	  case 6:
	  case 7:
	  case 8:
	     printf(" Enter 2 operands :");
		 scanf("%d%d",&x,&y);
		 break;
	  case 9:
	  case 10:
	  case 11:
	     printf(" Enter 1 operand :");
		 scanf("%d",&x);
		 break;
      default :
	    printf(" Invalid ID");	
	}  
	
   switch(ID)
	{ case 1:  result=  add      ( x, y); 
	          printf(" Result %d\n",result);
              break;				
	  case 2:  result=  sub      ( x, y);
	          printf(" Result %d\n",result);
              break;
	  case 3:  result=  multi    ( x, y);
	          printf(" Result %d\n",result);
              break;
	  case 4:  result=  Divide   ( x, y);
	  	      printf(" Result %d\n",(float)result);
              break;
	  case 5:  result=  And      ( x, y);
	  	      printf(" Result %d\n",result);
              break;
	  case 6:  result=  XOR      ( x, y);
	   	      printf(" Result %d\n",result);
              break;
	  case 7:  result=  OR    ( x, y);
	  	      printf(" Result %d\n",result);
              break;
	  case 8:  result=  Reminder ( x, y);
	  	      printf(" Result %d\n",result);
              break;
	  case 9:  result=  Not      ( x); 
	          printf(" Result %d\n",result);
              break;	  
	  case 10: result=  Increment( x);
	  	      printf(" Result %d\n",result);
              break;
	  case 11: result= Decrement( x);
	  	      printf(" Result %d\n",result);
              break;
	}           
	
	
	
	
}
int add      (int x, int y)
{
	return x+y ;
}
int sub      (int x, int y)
{
	return x-y ;
}
int multi    (int x, int y)
{
	return x*y ;
}
int Divide   (int x, int y)
{
	return (float) x/y ;
}
int And      (int x, int y)
{
	return x&y ;
}
int XOR      (int x, int y)
{
	return x^y ;
}
int OR     (int x, int y)
{
    return x|y ;	
}
int Reminder (int x, int y)
{
	return x%y ;
}
          
int Not      (int x)
{
	return !x ;
}
int Increment(int x)
{
	return ++x ;
}
int Decrement(int x)
{
	return x--;
}