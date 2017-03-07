#include "bank.h"
#include <cstdlib>

int Bank::playBet(){
	
	
	
	int bet;
   do{  // should run until bet 1 - 100

    cout << "How much do you want to bet (Enter a number from 1 to 100) 0 to exit\n";
    cin >> bet;
     
    if (bet >= 1 && bet <= 100){
        return(bet); 
    } else if (bet == 0){
    exit(1);
    }
    else {
        printf("\n\nPlease enter a bet from 1 to 100\n");
    }
   

   }while ((bet < 0) || (bet > 100));
   
   
	
   
}

 int Bank::cash(){
 	
 	bank =1001;
 	bank = bank - bet;
 	
 	return bank;
 	
 }
 
 //int Bank::bankTrips(){ }
