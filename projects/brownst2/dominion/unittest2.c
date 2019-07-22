//this is a unittest for the minion card function
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
        int handPos=0, choice1=1, choice2=0, choice3=0, bonus=0;
        int *bonuspoint = &bonus;
        int currentPlayer = 1;
        struct gameState *testp = &G;
	int testActions = testp->numActions;
        int testCoins = testp->coins;	
	printf("\n----------Testing Minion Card----------\n");
        minionfunc(i, j, currentPlayer, choice1, choice2, choice3, testp, handPos, bonuspoint);

	printf("\nTesting for action increase by 1\n");
        if((testp->numActions - testActions) == 1){
        printf("\xE2\x9C\x85 PASSED!\n");
        }
        else  printf("\xE2\x9D\x8C FAILED!\n");

        printf("\nTesting for increase coins by 2\n");
        if((testp->coins - testCoins) == 2){
        printf("\xE2\x9C\x85 PASSED!\n");
        }
        else  printf("\xE2\x9D\x8C FAILED!\n");

        printf("\n----------Finished Test----------\n");
return 0;
}
