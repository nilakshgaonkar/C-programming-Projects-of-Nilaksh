// ROCK , PAPER AND SESER GAME

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rps(char comp , char you);

int main()
{
    char comp , you;

    srand(time(0)); 
    int number = rand()%100 + 1;

    if (number < 33)
    {
       comp = 'R';
    }
    else if(number > 33 && number <66)
    {
        comp = 'P';
    }
    else if (number > 66)
    {
        comp = 'S';
    }
    

    printf("Enter 'R' for rock 'P' for paprer 'S' seser : ");
    scanf("%c" , &you);

    printf("\n");

    int result = rps(comp , you);

    if (result == 1)
    {
       printf("Computer chose %c and you chose %c so you WON\n\n" , comp , you);
    }
    else if (result == -1)
    {
        printf("Computer chose %c and you chose %c so you LOST\n\n" , comp , you);
    }
    else if (result == 0)
    {
        printf("The game is DRAW");
    }

    return 0;
}

int rps(char comp , char you){
    if (you == comp)
    {
        return 0;
    }
    
    if (you == 'P' && comp == 'R')
    {
       return 1;
    }
    else if (you == 'R' && comp == 'P')
    {
        return -1;
    }

    if (you == 'R' && comp == 'S')
    {
       return 1;
    }
    else if (you == 'S' && comp == 'R')
    {
        return -1;
    }

    if (you == 'S' && comp == 'P')
    {
       return 1;
    }
    else if (you == 'P' && comp == 'S')
    {
        return -1;
    }

}