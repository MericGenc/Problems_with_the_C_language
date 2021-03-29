
// MERÝÇ GENÇ  


#include<stdio.h>


int main(){
	
	
	// x = is the total money in the bank.
	// y = equals how many 50 banknotes there are.
	// z = equals how many 20 banknotes there are.
	// d = equals how many 5 banknotes there are. 
	// f = equals how many 1 banknotes there are.

	
	int x,y,z,d,f;
	
	
	// We get the information about how much money the user has in this area.

	
	
	printf("WELCOM TO MERIC BANK \n");
	printf("WE WISH YOU HEALTHY DAYS \n \n \n");
	
	printf("PLEASE WRITE THE TURKIS LIRA AMUNT IN YOUR ACCOUNT:");
	scanf("%d",&x);
	
	
	//We process according to the money in the user's bank account.

	
	if(x>0){
	
	//If the user has a money greater than zero, we print the bank notes on the screen in order, thanks to the operations below.
	
	y=x/50;
 	z=(x-(y*50)) /20;
 	d=((x-(y*50))-(z*20))/5;
 	f=(((x-(y*50))-(z*20))-(5*d))/1 ;
 	
 	
 	printf("Amount of money(TL):%d TL \n",x);
 	printf("%d pieces ---> 50 TL \n",y);
 	printf("%d pieces ---> 20 TL\n",z);
 	printf("%d pieces ---> 5 TL\n",d);
 	printf("%d pieces ---> 1 TL\n",f);
	
	
    } 
	
         
	
	else if (x<0){
		
	printf("YOU OWE THE BANK \n");
	printf("If you want to pay money to the bank, you can pay your debt with the following installment options. \n");
	
	
	//If the user owes the bank, we give the information to the customer how many and which banknotes customer will pay using.

	
	x=(-x);	
	y=x/50;
 	z=(x-(y*50)) /20;
 	d=((x-(y*50))-(z*20))/5;
 	f=(((x-(y*50))-(z*20))-(5*d))/1 ;
 	x=(-x);
 	
 	
 	
	printf("Amount of money(TL): %d TL\n",x);
	printf("%d pieces ---> 50 TL \n",y);
 	printf("%d pieces ---> 20 TL\n",z);
 	printf("%d pieces ---> 5 TL\n",d);
 	printf("%d pieces ---> 1 TL\n",f);
		
		
	}
	
	
	
	
	else if (x==0)  {
		
		//If the customer does not have any money in the bank, we report this in this section.

		
		printf("You don not have money in yours account \n");
		printf("Amount of money(TL): %d TL",x);
	
	}
	

	
	return 0;
	
}
