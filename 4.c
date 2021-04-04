#include<stdio.h>

int main(){
	
	int value,z=1;
	char y;
	


	do{
	
		printf("\nPlease Write Number: ");
		scanf("%d",&value);
	
	
	
	if(value>=10){
	
		do{
			
			value=value/10;
			
		
			z++;
	
		
		}while(value>=10);	
		
		
	}
	
	else if(value<=-10){
		
		value=-value;
	
		do{
			
			value=value/10;
			
		
			z++;
	
		
		}while(value>=10);	
		
	}
	
		printf("\nNumber of digits of the value you entered : %d\n\n",z); 
		z=1;
		
		
	
		printf("\nDou you want to continue?(Y/N) ");
		
		do {
			
			
			scanf("%c",&y);
		}
		
		
		while( y == '\n');
		
		printf("\n \n \n");
	
	
	}
	while( y == 'Y' || y == 'y' );
		

	
	
	return 0;
}
