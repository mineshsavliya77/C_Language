#include<stdio.h>

int main(){
	
	
	int i=1,n;
	
	
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	
	
	while(i<=n){

		if(i%2==0){
		
			printf("%d\n",i);
			
		}else{
			
			printf("%d\n",i*i);
			
		}
		
		i++;
	
	return 0;
} 