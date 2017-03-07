#include<iostream>
#include<ctime>


#include<cstdlib>

using namespace std;

class Dice{

private:
int dice[6];
int diceFace, diceFace2, diceFace3;
int i, win, point;
time_t t;

public:
int roll(int a);
int firstRollStat(int a, int b, int c);
int playerTurn();
int playerRoll();
int playerRollStat(int a, int b, int c);
//int playerRoll();
//void preRoll();
//int bAnalyzeFR();

};

