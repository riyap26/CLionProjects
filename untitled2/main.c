#include <stdio.h>
#include <stdlib.h>


char box[3][3] = { '*', '*', '*',
                   '*', '*', '*',
                   '*', '*', '*'};


void board();
char checkWin();







int main() {

    int player, choice1, choice2;
    player = 1;
    char mark, i;

    do {
        board();
        player = (player%2) ? 1 : 2;

        printf("Player %d, enter a y coordinate ", player);
        scanf("%d", &choice1);
        printf("Player %d, enter a x coordinate ", player);
        scanf("%d", &choice2);

        mark = (player==1) ? 'X' : 'O';

        if (choice1 == 0 && choice2 == 0 && box[0][0] == '*')
            box[0][0] = mark;
        if (choice1 == 0 && choice2 == 1 && box[0][1] == '*')
            box[0][1] = mark;
        if (choice1 == 0 && choice2 == 2 && box[0][2] == '*')
            box[0][2] = mark;
        if (choice1 == 1 && choice2 == 0 && box[1][0] == '*')
            box[1][0] = mark;
        if (choice1 == 1 && choice2 == 1 && box[1][1] == '*')
            box[1][1] = mark;
        if (choice1 == 1 && choice2 == 2 && box[1][2] == '*')
            box[1][2] = mark;
        if (choice1 == 2 && choice2 == 0 && box[2][0] == '*')
            box[2][0] = mark;
        if (choice1 == 2 && choice2 == 1 && box[2][1] == '*')
            box[2][1] = mark;
        if (choice1 == 2 && choice2 == 2 && box[2][2] == '*')
            box[2][2] = mark;
        i = checkWin();
        player++;
    } while (i== 'P');

    board();
    if (i =='O')
        printf("Player %d wins", --player);
    else
        printf("Game ends in a draw");

    getchar();

    return 0;
}



char checkWin(){

    if (box[0][0] == box[0][1] && box[0][1] == box[0][2])
        return 'O';
    if (box[1][0] == box[1][1] && box[1][1] == box[1][2])
        return 'O';
    if (box[2][0] == box[2][1] && box[2][1] == box[2][2])
        return 'O';
    if (box[0][0] == box[1][0] && box[1][0] == box[2][0])
        return 'O';
    if (box[0][1] == box[1][1] && box[1][1] == box[2][1])
        return 'O';
    if (box[0][2] == box[1][2] && box[1][2] == box[2][2])
        return 'O';
    if (box[0][0] != '*' && box[0][1] != '*' && box[0][2] != '*' && box[1][0] != '*' && box[1][1] != '*' && box[1][2] != '*' && box[2][0] != '*' && box[2][1] != '*' && box[2][2] != '*'){
        return 'D';
    }
    else
        return 'P';
};



void board(){
    system("clear");
    printf("\nPlayer 1 is X, Player 2 is O\n\n");

    printf("         0      1       2  \n\n");


    printf(" 0       %c  |   %c   |   %c  \n", box[0][0], box[0][1], box[0][2]);
    printf("      ------|-------|------\n");
    printf(" 1       %c  |   %c   |   %c  \n", box[1][0], box[0][1], box[0][2]);
    printf("      ------|-------|------\n");
    printf(" 2       %c  |   %c   |   %c  \n", box[2][0], box[0][1], box[0][2]);

}

