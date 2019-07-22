// this is a unittest for the baron card function
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

	int testbuy = testp->numBuys;
	int testestatecards = supplyCount(estate, testp);
	printf("\n----------Testing Baron Card----------\n");
	
	baronfunc(i, j, currentPlayer, choice1, choice2, choice3, testp, handPos, bonuspoint);
	printf("\nTesting for buy increase by 1\n");
	if((testp->numBuys - testbuy) == 1){
	printf("\xE2\x9C\x85 PASSED!\n");
	}
	else  printf("\xE2\x9D\x8C FAILED!\n");
	
	printf("\nTesting for draw 1 estate card\n");
        if((testestatecards - supplyCount(estate, testp)) == 1){
        printf("\xE2\x9C\x85 PASSED!\n");
        }
        else  printf("\xE2\x9D\x8C FAILED!\n");

	printf("\n----------Finished Test----------\n");
return 0;
}
// red X symbol
// printf("\xE2\x9D\x8C\n");

// green check symbol
// printf("\xE2\x9C\x85\n");
