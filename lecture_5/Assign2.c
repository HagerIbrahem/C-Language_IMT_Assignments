#include <stdio.h>

int main ()
{  int i ,j;
   int passed_s =0,failed_s=0;
   int class_student [3][10]= {{55,44,77,88,92,33,48,83,91,90},{55,75,85,44,92,44,81,61,90,70},{99,77,53,72,84,74,99,100,44,51}};
   int sum=0;
   float Avarage ;
   int highest_D =0 ,lowest_D =class_student[0][0] ;
	for(i=0; i<3 ;i++)
	{
	  for(j=0; j<10 ;j++)
		{ 
	      if((class_student [i][j] <=100 )&& (class_student [i][j] >=50))
		  { 
			passed_s +=1 ;  
		  }
		 else if((class_student [i][j] <50 )&& (class_student [i][j] >=0))
		  { 
			failed_s +=1 ;  
		  }
          if(class_student[i][j] > highest_D )
	     { 
             highest_D = class_student[i][j];
		  
	     }
	     else if(class_student[i][j] < lowest_D )
	      { 
	     	 lowest_D = class_student[i][j];  
	      }
		  
		  sum +=class_student[i][j] ;
	    } 		
	     		
	}
	Avarage=(float) sum/ 30.0;
	 
   printf("Number of passed student = %d \n",passed_s) ;	
   printf("Number of filed student = %d \n",failed_s) ;
   printf("The highest grade is %d \n",highest_D) ;
   printf("The lowest grade is %d \n",lowest_D) ;
   printf("The avarage grade is %f \n",Avarage) ;


}