
// MERİÇ GENÇ 

#include <iostream>
using namespace std;



int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else return n * fact(n - 1);
}
int main() {
  
  char aim,repeat ; 
   int n, r, comb, per;
   
   
  
  do {
  
    cout<<"Whatever action you want to do from the permutation and combination, please write the initial letter of the type you want.(please write in lowercase) (p/c) :  ";
    cin>>aim;
   
   cout<<"Enter n : ";
   cin>>n;
  
   cout<<"\nEnter r : ";
   cin>>r;
   
   if(n>r){
   switch (aim){
   case 'c'  :
   comb = fact(n) / (fact(r) * fact(n-r));
   cout << "\nCombination : " << comb;
   break;
   case 'p' :
   per = fact(n) / fact(n-r);
   cout << "\nPermutation : " << per;
   break;
	}
   }
   
   else cout<<"The value of N must be greater than the value of R";
   
   cout<<"\n\Do you want to continue(Y/N) : ";
   cin>>repeat;
   
  }while(repeat=='y'||repeat=='Y');
}
