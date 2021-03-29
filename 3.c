

//Meriç GENÇ 


#include<stdio.h>

 
 main( ){
	
	
	// In this introductory part, we give general information.
	
	printf("WELCOM TO MERIC HOSPITAL\n\n\n");
	printf("WE WISH YOU HEALTHY DAYS\n\n\n");
	
	printf("Our hospital is to serve you with all the means of technology in order\n\nto combat obesit which is one of the biggest diseases of our age.\n\n\n");
	
	printf("Trust us and please fill out the form below.\n\n\n");
	
	printf("We are always here to help you\n\n\n");
	
	//In this section, we get information about herself/himself from the user.
	
	// weight=user's weight height=user's height 
	// BMI=Body Mass Index is an indicator that you have a tendency to be healthy or become obese. BMI= weight/(height*height)
	// The char variable we have defined here is for the question of whether you want to repeat it again and the user will be asked in the future. 
		
	float weight,height,BMI;
	char continue_repeat;
	
	
	do{
		
		//In this field, we will take values ??from the user and perform the necessary actions.

		
		
		printf("Please enter your weight(kg): ");
		scanf("%f",&weight);
		printf("\nPlease enter your height(m):  ");
		scanf("%f",&height);
		
		BMI=weight/(height*height);
		
		
		// We determine the required running value according to the value we find here.

		
			if(BMI<18.5){
			printf("\nYou are BELOW NORMAL WEIGHT \n");
			printf("\nYour weight is lower than you should be, please call 	us and we'll help you\n");
			printf("\nOur phone number is 0444 434 343434\n");
			
			}	
		
			else if(18.5<=BMI && BMI<25){
				printf("\nYou are NORMAL WEIGHT");
				printf("\nYour weight is normal, but if you come to us and have a check up, we can give you more detailed information.\n");
				printf("\nOur phone number is 0444 434 343434\n");
				}							
			
			else if(25<=BMI && BMI<30){
			
			printf("\nYou are OVERWIGHT \n");
			printf("\nYou are over your weight, please call us and we will help you.");
			printf("\nOur phone number is 0444 434 343434\n");
			}
		
			else if(30<=BMI && BMI<35){
			
			printf("\nYou are Class 1 OBESITY \n");
			printf("\nWe want to help you if you call us for class 1 obesity right now.");
			printf("\nOur phone number is 0444 434 343434\n");
			}
		
			else if(35<=BMI && BMI<40){
				
			printf("\nYou are Class 2 OBESITY  \n");
			printf("\nWe want to help you if you call us for class 2 obesity right now.");
			printf("\nOur phone number is 0444 434 343434\n");
			}
		
			else if(40<=BMI){
			
			printf("\nYou are Class 3 OBESITY \n");
			printf("\nWe want to help you if you call us for class 3 obesity right now.");
			printf("\nOur phone number is 0444 434 343434\n");
			}

			
				
			printf("\nDou you want to continue?(Y/N) ");
		
		//In this section, we ask if the user wants to do the operation from the beginning.

		
		do {
			
			
			scanf("%c",&continue_repeat);
		}
		
		
		while( continue_repeat == '\n');
		
		printf("\n \n \n");
				
	}
	
	while( continue_repeat == 'Y' || continue_repeat == 'y' );
		
	return 0;
 		
 	
	
}


