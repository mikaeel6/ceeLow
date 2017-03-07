#include "dice.h"
#include "bank.h"
#include<cstdlib>

char stillPlay;



int Dice::roll(int a){
	
	do{
	
int win, payOff;
int dice[6], dice2[6], dice3[6];


srand(time(&t));
    dice[i] = rand() % 6;
    dice2[i] = rand() % 6;
    dice3[i] = rand() % 6;
    
    diceFace = dice[i] + 1;
    diceFace2 = dice2[i] + 1;
    diceFace3 = dice3[i] +1;

    cout << diceFace << diceFace2 << diceFace3 << endl;
    
    win =  firstRollStat(diceFace, diceFace2, diceFace3);
    
    
    if(win == 17){return 0;}
    else if (win == 18){return 0;}
    else if (win == 19){return 0;}
    else if (win == 20){return a * 2;}
    else if (win == 21){return a * 2;}
    else if (win == 1) { return a *2;}
	else if (win == 2){return 0;}    
    else if (win == 9){return a * 2;}
    else if (win == 10){return a * 2;}
    else if (win == 11){return a * 2;}
    else if (win == 12){return 0;}
    else if (win == 13){return 0;}
    else if (win == 14){return 0;}
    else if (win == 15){return 0;}
    else if (win == 16){return 0;}
	
  
   cout <<"win from bank roll" << win <<endl;
   cout <<"\ndo you want banker to roll again? ";
      
    cin >> stillPlay;

     } while(toupper(stillPlay) == 'Y');
  }

 
 int Dice::firstRollStat(int a, int b, int c){
 	int win, x, point;

 if ( a == b && b == c)
{cout <<"\ntrips  bank wins\n"; win = 17;}

  else if  (a == b && c ==6 || a == c && b == 6 || c == b && a == 6)
  
 {cout <<"\nhead cracks (6) bank wins\n"; win = 18;}
 
 else if (a == 4 && b == 5 && c == 6 || a == 5 && b == 4 && c ==6 || a == 6 && b == 5 && c == 4 || a == 4 && b == 6 && c == 5 || a == 5 && b == 6 && c == 4 || a == 6 && b == 4 && c == 5)
 {cout <<"\nCeeLow 456 Bank wins"; win = 19;}
 
 else if  (a == b && c ==1 || a == c && b ==1 || c == b && a ==1)
 { cout << "\nAce um, Bank loses\n"; win = 20;}
 
 else if (a == 1 && b == 2 && c == 3 || a == 1 && b == 3 && c == 2 || a == 2 && b == 1 && c == 3 || a == 2 && b == 3 && c == 1 || a == 3 && b == 1 && c == 2 || a == 3 && b == 2 && c ==1)
 {cout << "\n Ace away 123 Bank loses\n"; win = 21;}
 
 else if  (a == b )
 {cout << " \n Bank\'s point is " << c << endl; point =c;  playerRoll();   if (win < 7){
   	  if (point < win){win = 1;} else win =2;
   } return win;}
 
 else if (b == c){
 	cout << " \nBank\'s point is " << a << endl; point = a; playerRoll(); if (win < 7){
   	  if (point < win){win = 1;} else win =2;
   } return win;}
 	
 	else if (a == c)
 	{ cout << " \n Bank\'s point is " << b << endl; point = b; playerRoll();if (win < 7){
   	  if (point < win){win = 1;} else win =2;
   } return win;}
 	
 	else cout << " \nno point, bank needs to throw again ";
 	

 
return win;

 }
 

 char stillin;
 
 int Dice::playerRoll(){
 	
    char playTurn;
 	cout << "do you want to roll from top?\n";
 	cin >> playTurn;
 	if (toupper(playTurn) == 'Y')
 	
	
   // char stillin;

srand(time(&t));
  
  
 	int dice[6], dice2[6], dice3[6];
 	int a, b, c, win;
 	
    dice[i] = rand() % 6;
    dice2[i] = rand() % 6;
    dice3[i] = rand() % 6;
    
    diceFace = dice[i] + 1;
    diceFace2 = dice2[i] + 1;
    diceFace3 = dice3[i] +1;
    cout << "You rolled " << diceFace << diceFace2 << diceFace3 << endl;
    
    win = playerRollStat(diceFace, diceFace2, diceFace3);
  // cout << "This is win from playerRoll()" << win<< endl;
   
   
     
    return win;
    
 }
 
 int Dice::playerRollStat(int a, int b, int c){
 	int win, x, point;
    
    if ( a == b && b == c)
{cout <<"\ntrips you win\n"; win = 9; return win;}

  else if  (a == b && c ==6 || a == c && b == 6 || c == b && a == 6)
  
 {cout <<"\nhead cracks (6) you wins\n"; win = 10; return win;}
 
 else if (a == 4 && b == 5 && c == 6 || a == 5 && b == 4 && c ==6 || a == 6 && b == 5 && c == 4 || a == 4 && b == 6 && c == 5 || a == 5 && b == 6 && c == 4 || a == 6 && b == 4 && c == 5)
 {cout <<"\nCeeLow 456 you win"; win = 11; return win;}
 
 else if  (a == b && c ==1 || a == c && b ==1 || c == b && a ==1)
 { cout << "\nAce um, you lose\n"; win = 12; return win;}
 
 else if (a == 1 && b == 2 && c == 3 || a == 1 && b == 3 && c == 2 || a == 2 && b == 1 && c == 3 || a == 2 && b == 3 && c == 1 || a == 3 && b == 1 && c == 2 || a == 3 && b == 2 && c ==1)
 {cout << "\n Ace away 123 you lose\n"; win = 13; return win;}
 
 else if  (a == b )
 {cout << " \nYour point is " << c << endl;   return c;}
 
 else if (b == c){
 	cout << " \nYour point is " << a << endl; return a;}
 	
 	else if (a == c)
 	{ cout << " \nYour point is " << b << endl;  return b;}
 	
 	else cout << " \nNo point, you need to throw again "; playerRoll();
 	

 
return win;
		
 	
 }
