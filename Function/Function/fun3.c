#include<stdio.h>

void print(){

    int j,i,k=10,l;
    
    for(i=1; i<=10; i++){
        
        for(j=1; j<=5; j++){
			
			if(i%2!=0)	
				
			printf("%d ",i);
			
		}
		printf("\n");
    
	}

}

int main (){

	print();
//	printf("\nhet lathiya");
	

	return 0;
}