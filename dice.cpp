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
    
    
    if(win == 1){return 0;}
    else if (win == 2){return 0;}
    else if (win == 3){return 0;}
    else if (win == 4){return a * 2;}
    else if (win == 5){return a * 2;}
    else if (win == 6){playerRoll();}
    else if (win == 7){playerRoll();}
    else if (win == 8){playerRoll();}
    else if (win == 9){return a * 2;}
    else if (win == 10){return a * 2;}
    else if (win == 11){return a * 2;}
    else if (win == 12){return 0;}
    else if (win == 13){return 0;}
    else if (win == 14){return 0;}
    else if (win == 15){return 0;}
    else if (win == 16){return 0;}
	
  

   cout <<"\ndo you want banker to roll again? ";
      
    cin >> stillPlay;

     } while(toupper(stillPlay) == 'Y');
  }

 
 int Dice::firstRollStat(int a, int b, int c){
 	int win, x, point;

 if ( a == b && b == c)
{cout <<"\ntrips  bank wins\n"; win = 1;}

  else if  (a == b && c ==6 || a == c && b == 6 || c == b && a == 6)
  
 {cout <<"\nhead cracks (6) bank wins\n"; win = 2;}
 
 else if (a == 4 && b == 5 && c == 6 || a == 5 && b == 4 && c ==6 || a == 6 && b == 5 && c == 4 || a == 4 && b == 6 && c == 5 || a == 5 && b == 6 && c == 4 || a == 6 && b == 4 && c == 5)
 {cout <<"\nCeeLow 456 Bank wins"; win = 3;}
 
 else if  (a == b && c ==1 || a == c && b ==1 || c == b && a ==1)
 { cout << "\nAce um, Bank loses\n"; win = 4;}
 
 else if (a == 1 && b == 2 && c == 3 || a == 1 && b == 3 && c == 2 || a == 2 && b == 1 && c == 3 || a == 2 && b == 3 && c == 1 || a == 3 && b == 1 && c == 2 || a == 3 && b == 2 && c ==1)
 {cout << "\n Ace away 123 Bank loses\n"; win = 5;}
 
 else if  (a == b )
 {cout << " \n Bank\'s point is " << c << endl; win =6;}
 
 else if (b == c){
 	cout << " \nBank\'s point is " << a << endl; win = 7;}
 	
 	else if (a == c)
 	{ cout << " \n Bank\'s point is " << b << endl; win = 8;}
 	
 	else cout << " \nno point, bank needs to throw again ";
 	

 
return win;

 }
 
 //int Dice::playerTurn(){
 	
 //	{playerRoll();
	 //return win;}
// }
 
 char stillin;
 
 int Dice::playerRoll(){
 	
    char playTurn;
 	cout << "do you want to roll?\n";
 	cin >> playTurn;
 	if (toupper(playTurn) == 'Y')
 	
	do{	
 	int dice[6], dice2[6], dice3[6];
 	int win;
   // char stillin;

srand(time(&t));
    dice[i] = rand() % 6;
    dice2[i] = rand() % 6;
    dice3[i] = rand() % 6;
    
    diceFace = dice[i] + 1;
    diceFace2 = dice2[i] + 1;
    diceFace3 = dice3[i] +1;
    cout << "You rolled " << diceFace << diceFace2 << diceFace3 << endl;
    
    win = playerRollStat(diceFace, diceFace2, diceFace3);
    
    cout << "\nyou want to roll again" << endl;
    cin >> stillin;

     } while(toupper(stillin) == 'Y');
    
 }
 
 int Dice::playerRollStat(int a, int b, int c){
 	int win, x, point;
    
    if ( a == b && b == c)
{cout <<"\ntrips you win\n"; win = 9;}

  else if  (a == b && c ==6 || a == c && b == 6 || c == b && a == 6)
  
 {cout <<"\nhead cracks (6) you wins\n"; win = 10;}
 
 else if (a == 4 && b == 5 && c == 6 || a == 5 && b == 4 && c ==6 || a == 6 && b == 5 && c == 4 || a == 4 && b == 6 && c == 5 || a == 5 && b == 6 && c == 4 || a == 6 && b == 4 && c == 5)
 {cout <<"\nCeeLow 456 you win"; win = 11;}
 
 else if  (a == b && c ==1 || a == c && b ==1 || c == b && a ==1)
 { cout << "\nAce um, you lose\n"; win = 12;}
 
 else if (a == 1 && b == 2 && c == 3 || a == 1 && b == 3 && c == 2 || a == 2 && b == 1 && c == 3 || a == 2 && b == 3 && c == 1 || a == 3 && b == 1 && c == 2 || a == 3 && b == 2 && c ==1)
 {cout << "\n Ace away 123 you lose\n"; win = 13;}
 
 else if  (a == b )
 {cout << " \nYour point is " << c << endl; point = c; win =14;}
 
 else if (b == c){
 	cout << " \nYour point is " << a << endl; point = a; win = 15;}
 	
 	else if (a == c)
 	{ cout << " \nYour point is " << b << endl; point = b; win = 16;}
 	
 	else cout << " \nNo point, you need to throw again ";
 	

 
return win;
		
 	
 }
