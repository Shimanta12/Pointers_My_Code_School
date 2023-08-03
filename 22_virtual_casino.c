#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;

void play(int bet)
{
    char *C = (char *)malloc(3 * sizeof(char));
    C[0] = 'J', C[1] = 'Q', C[2] = 'K';
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }
    int playerGuess;
    printf("What's the position of the queen? 1,2, or 3  #");
    scanf("%d", &playerGuess);
    if (C[playerGuess - 1] == 'Q')
    {
        cash += 3 * bet;
        printf("You Win ! Result = | %c%c%c | Total Cash = %d", C[0], C[1], C[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You Loose ! Result = | %c%c%c | Total Cash = %d", C[0], C[1], C[2], cash);
    }
    free(C); // We are making a call to the free function passing it the address of this memory block this array C.
}

int main()
{
    int bet;
    printf("**Welcome to the Virtual Casino**\n\n");
    printf("Total Cash = $%d\n", cash);
    while (cash > 0)
    {
        printf("What's your bet? $");
        scanf("%d", &bet);
        if (bet <= 0)
        {
            printf("Invalid amount of bet!\n");
            continue;
        }
        play(bet);
        printf("\n******************************\n");
    }
    return 0;
}