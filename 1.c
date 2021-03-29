
// MERiÇ GENÇ 


#include<stdio.h>
 main(){
 	
	// digit = digis is a 3-digit number
	// hundreds = equals the number in hundreds of places 
	// tenth = equals the  number in tens place
	// units= equals the number in ones place
	
	int digit, hundreds, tenth, units;
 	
 	// In this section, we enter the desired 3-digit number value.
 	printf("Please enter a 3-digit number: ");  
 	scanf("%d",&digit); 
 	
 	
	/* When writing a 3-digit number value, I can write a number such as 034, but in fact this is not a 3-digit number, so prevent writing numerical 
	values such as  034,045,084 by specifying a spacing with if and else. */
	if(digit>=100 && digit<=999){
	
  	// This section is where we will divide the 3-digit number we wrote
  	/* We divede the 3-digit number we wrote to find the number in hundreds,and we will not care about  the number after the coma because
	   we donete it is a integer */
	/*  When calculating the tens digit, first we change the value of hundreds of places one digit first, so we turn it into a multiple of the
        hundred and subtract it from the first  3-digit number I entered, after these operations  , we find the resulting number and divide it by it and 
		write the value we have in the tens digit.
    */
    
    // Using the mod (%) operator to find the ones digit, we find the number in the 1s digit.
 	hundreds = digit / 100;             
 	tenth  = (digit - (hundreds*100))/10;  
 	units = digit % 10;            
	 
	//In this area, we write down the values ??we calculated in the upper field one under the other. We also use \n to write one under the other.   
 	
 	printf("100s digit %d\n",hundreds);
 	printf("10s digit %d\n",tenth);
 	printf("1s digit %d\n", units);
 	
    }
    
    // The else command here tells us that if the number I am typing is not a 3-digit number, it is a wrong number.
    else{
    	printf("This is not a 3-digit number");
	}
	
	
 	return 0;
 }
