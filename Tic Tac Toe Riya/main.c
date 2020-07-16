/* Created by Riya Patel on 7/8/20. */

#include <stdio.h>
#include "tic_tac_toe.h"


int main() {
    printDirections();
    int player, choice1, choice2;
    char mark, i;
    char end = 'R';

    /* this while loop will run again if user inputs restart at the end */
    while (end == 'R') {
        player = 1;
        do {
            board();
            printf("Player %d, enter a x coordinate: ", player);
            scanf("%d", &choice1);
            printf("Player %d, enter a y coordinate: ", player);
            scanf("%d", &choice2);

            /* assigns mark to each player */
            if (player == 1)
                mark = 'X';
            else
                mark = 'O';

            /* places turn on board */
            placeTurn(choice1, choice2, mark);

            /* checks if game has ended */
            i = checkWin();
            if (i =='O'){
                board();
                printf("\nPlayer %d wins!\n", player);
            }
            if (i == 'D'){
                board();
                printf("\nGame ends in a draw\n");
            }

            /* reassigns the next move to the next player */
            if (player == 1)
                player = 2;
            else
                player = 1;

        } while (i == 'P');

        /* once do while loop does not equal P, game is done */
        printf("Enter 'R' or 'E' to restart or end the game: \n");
        scanf(" %c", &end);
        if (end == 'R')
            /* will enter the first while loop again */
            funcRestart();
        if (end == 'E')
            return 0;
    }
}

