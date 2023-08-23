#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

Mmeory leak is improper use of dynamic memory or the heap section of memory that causes the memory consumption of our program to increase over a period of time. Remember memory leak always happens because of unused and unreferenced memory blocks in the heap. Anything on the stack  is deallcated automatically and stack size is fixed in size. At the most we can have an overflow in stack.
 */

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
    free(C); // We are making a call to the free function passing it the address of this memory block this array C. If we were not using free then the memory would have shot up like anything. The memory consumption would have shot up like anything. But because we are freeing at the end of the function, its not going up. There is no memroy leak.
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