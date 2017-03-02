#include<iostream>
#include<ctime>
#include<cctype>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstdio>
#include "dice.h"
#include "bank.h"

/* 
#include "fRoll.h"
#include "pBank.h"  
 */


/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	
	int bank = 1000;
	int bet, win, payOff;
	char stillPlay;
	Dice gameDice;
	Bank Pbank;
	
	do{
		
    bet = Pbank.playBet();
    bank = bank - bet;
    cout <<" This is your current bankroll " <<bank << " + your bet of " << bet << endl;

	payOff = gameDice.roll(bet);
    bank = bank + payOff; 
	
     cout <<"\ndo you want to play again? ";
      
    cin >> stillPlay;

     } while(toupper(stillPlay) == 'Y');
	return 0;
}
