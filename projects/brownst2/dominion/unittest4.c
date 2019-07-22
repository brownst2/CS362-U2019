//this is a unittest for the tribute card function
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

int main()
{
struct gameState G;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};


  initializeGame(2, k, 4000, &G);

        int i=0;
        int j=0;
        int handPos=0, choice1=0, choice2=0, choice3=0, bonus=0;
        int *bonuspoint = &bonus;
        int currentPlayer = 1;
	int nextPlayer = currentPlayer + 1; 
	struct gameState *testp = &G;

	printf("\n----------Testing Tribute Card----------\n");
//tributefunc(int i, int j, int currentPlayer, int nextPlayer, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus){
        tributefunc(i, j, currentPlayer, nextPlayer, choice1, choice2, choice3, testp, handPos, bonuspoint);

return 0;

}                     
