#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time

enum Status
{
    CONTINUE,
    WON,
    LOST
};
int rollDice(void); // function prototype

int main(void)
{
    srand(time(NULL));
    int myPoint;
    enum Status gameStatus;
    int sum = rollDice();
    switch (sum)
    {
        // win on first roll
    case 7:  // 7 is a winner
    case 11: // 11 is a winner
        gameStatus = WON;
        break;

        // lose on first roll
    case 2:  // 2 is a loser
    case 3:  // 3 is a loser
    case 12: // 12 is a loser
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE; // player should keep rolling
        myPoint = sum;         // remember the point
        printf("Point is %d\n", myPoint);
        break; // optional
    }
    while (CONTINUE == gameStatus)
    {
        sum = rollDice(); // roll dice again
        // determine game status
        if (sum == myPoint)
        { // win by making point
            gameStatus = WON;
        }
        else
        {
            if (7 == sum)
            {
                gameStatus = LOST;
            }
        }
    }
    if (WON == gameStatus)
    {
        puts("Player wins");
    }
    else
    {
        puts("Player loses");
    }
}

int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}