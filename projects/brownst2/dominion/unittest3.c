//this is a unittest for the ambassador card function
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
        struct gameState *testp = &G;

        printf("\n----------Testing Ambassador Card----------\n");

        ambassadorfunc(i, j, currentPlayer, choice1, choice2, choice3, testp, handPos, bonuspoint);


        printf("\n----------Finished Test----------\n");
return 0;
}
                                  
