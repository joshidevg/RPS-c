
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
1 = r
2 = p
3 = s
*/

/*
10 = draw
5 = win
-5 = loss
*/
int main()
{
    int play, res;
    printf("~~~~WELCOME TO ROCK PAPER SCISSOR~~~~\n\n");
    printf("Press 1 for Rock\n");
    printf("Press 2 for Paper\n");
    printf("Press 3 for Scissors\n");
    printf("\nYour choice:");
    scanf("%d", &play);
    int computer[3] =  {1, 2, 3};
    time_t t;
    srand((unsigned)time(&t));
    int com = computer[rand()%3];

    if(play == 1)
    {
        printf("\nYou chose Rock!\n");
        if(com == 1)
        {
            printf("Computer chose Rock!\n");
            res = 10;
        }
        else if(com == 2)
        {
            printf("Computer chose Paper!\n");
            res = -5;
        }
        else
        {
            printf("Computer chose Scissors!\n");
            res = 5;
        }
    }
    else if(play == 2)
    {
        printf("\nYou chose Paper!\n");
        if(com == 1)
        {
            printf("Computer chose Rock!\n");
            res = 5;
        }
        else if(com == 2)
        {
            printf("Computer chose Paper!\n");
            res = 10;
        }
        else
        {
            printf("Computer chose Scissors!\n");
            res = -5;
        }
    }
    else if(play == 3)
    {
        printf("\nYou chose Scissors!\n");
        if(com == 1)
        {
            printf("Computer chose Rock!\n");
            res = -5;
        }
        else if(com == 2)
        {
            printf("Computer chose Paper!\n");
            res = 5;
        }
        else
        {
            printf("Computer chose Scissors!\n");
            res = 10;
        }
    }
    else
    {
        printf("\nPlease choose a correct option\n");
    }
    /*------------------------*/

    if(res == 10)
    {
        printf("Its a tie.\n");
    }
    else if(res == 5)
    {
        printf("You win! :))))\n");
    }
    else if(res == -5)
    {
       printf("You lose! :((((\n");
    }

    return 0;
}
