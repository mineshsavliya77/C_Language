#include<stdio.h>

int main(){
	
	int i,j,k,l;

	

		for(i=1; i<=11; i++){
		
			for(j=1; j<=11-i; j++){
				
				printf(" ");
		
			}
			
			for(j=1; j<=i; j++){
				
				printf("* ");
			}
			
		
			printf("\n");
	}
	
	for(i=10; i>=1 ; i--){
	
		for(j=10; j>=i; j--){
			
				printf(" ");
			
		}
		for(j=1; j<=i; j++){
			
			
				printf("* ");
		}
		
		
		printf("\n");		
		
	} 
	
	return 0;
	
}


/*  output  


          *
         * *
        * * *
       * * * *
      * * * * *
     * * * * * *
    * * * * * * *
   * * * * * * * *
  * * * * * * * * *
 * * * * * * * * * *
* * * * * * * * * * *
 * * * * * * * * * *
  * * * * * * * * *
   * * * * * * * *
    * * * * * * *
     * * * * * *
      * * * * *
       * * * *
        * * *
         * *
          *
		  
		  
*/   

		 		  