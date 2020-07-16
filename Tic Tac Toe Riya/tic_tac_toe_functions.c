/* Created by Riya Patel on 7/8/20. */

#include <stdio.h>
#include <stdlib.h>


/* my 2d array */
/* the symbol '*' means box is empty */
char box[3][3] = { '*', '*', '*',
                   '*', '*', '*',
                   '*', '*', '*'};

/* printing the directions to tic tac toe */
void printDirections(){
    printf("\n\t\t Tic Tac Toe Game\n");
    printf("Directions:\n1. Player 1 is X, Player 2 is O\n");
    printf("2. Players have to input the coordinates of a box\n");
    printf("3. The first player to mark their X/O in a row (straight, across, or diagonal) wins\n\n");
}

void board(){
    /* prints board of tic tac toe, is subject to change */
//    system("clear");
    printf("\n\n         0      1       2  \n\n");
    printf(" 0       %c  |   %c   |   %c  \n", box[0][0], box[0][1], box[0][2]);
    printf("      ------|-------|------\n");
    printf(" 1       %c  |   %c   |   %c  \n", box[1][0], box[1][1], box[1][2]);
    printf("      ------|-------|------\n");
    printf(" 2       %c  |   %c   |   %c  \n", box[2][0], box[2][1], box[2][2]);
}

void placeTurn(int choice1, int choice2, char mark){
    /* uses the choices that the player inputted to replace the '*' with a mark (X or O) */
    if (choice1 == 0 && choice2 == 0 && box[0][0] == '*')
        box[0][0] = mark;
    if (choice1 == 1 && choice2 == 0 && box[0][1] == '*')
        box[0][1] = mark;
    if (choice1 == 2 && choice2 == 0 && box[0][2] == '*')
        box[0][2] = mark;
    if (choice1 == 0 && choice2 == 1 && box[1][0] == '*')
        box[1][0] = mark;
    if (choice1 == 1 && choice2 == 1 && box[1][1] == '*')
        box[1][1] = mark;
    if (choice1 == 2 && choice2 == 1 && box[1][2] == '*')
        box[1][2] = mark;
    if (choice1 == 0 && choice2 == 2 && box[2][0] == '*')
        box[2][0] = mark;
    if (choice1 == 1 && choice2 == 2 && box[2][1] == '*')
        box[2][1] = mark;
    if (choice1 == 2 && choice2 == 2 && box[2][2] == '*')
        box[2][2] = mark;
}

char checkWin(){
    /* checks for a diagonal, up, or down row win */
    /* O means the game is Over */
    if ((box[0][0] != '*' && box[0][0] == box[0][1]) && (box[0][1] == box[0][2]))
        return 'O';
    if ((box[1][0] != '*' && box[1][0] == box[1][1]) && (box[1][1] == box[1][2]))
        return 'O';
    if ((box[2][0] != '*' && box[2][0] == box[2][1]) && (box[2][1] == box[2][2]))
        return 'O';
    if ((box[0][0] != '*' && box[0][0] == box[1][0]) && (box[1][0] == box[2][0]))
        return 'O';
    if ((box[0][1] != '*' && box[0][1] == box[1][1]) && (box[1][1] == box[2][1]))
        return 'O';
    if ((box[0][2] != '*' && box[0][2] == box[1][2]) && (box[1][2] == box[2][2]))
        return 'O';
    if ((box[0][0] != '*' && box[0][0] == box [1][1]) && (box[1][1] == box[2][2]))
        return 'O';
    if ((box[2][0] != '*' && box[2][0] == box [1][1]) && (box[1][1] == box[0][2]))
        return 'O';
    if ((box[0][0] != '*') && (box[0][1] != '*') && (box[0][2] != '*') && (box[1][0] != '*') && (box[1][1] != '*') && (box[1][2] != '*') && (box[2][0] != '*') && (box[2][1] != '*') && (box[2][2] != '*'))
        /* D means the game ended in a Draw */
        return 'D';
    else
        /* P means the game is still in Progress */
        return 'P';
}

void funcRestart(){
    /* grid renewed to empty spaces again */
    box[0][0] = '*';
    box[0][1] = '*';
    box[0][2] = '*';
    box[1][0] = '*';
    box[1][1] = '*';
    box[1][2] = '*';
    box[2][0] = '*';
    box[2][1] = '*';
    box[2][2] = '*';
}


