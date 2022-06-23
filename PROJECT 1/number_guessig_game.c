//A GAME TO GUESS THE NUMBER

#include<stdio.h>
#include<stdlib.h>// this iss a library used to generate random number 
#include<time.h>// for the time(0) function

int main()
{
    int number;
    int guess;
    int nuumber_of_guesses = 0;

    srand(time(0)); 
    number = rand()%100;// generates random number between 1 to 100
    // printf("The number is : %d" , number);

    // keep running the loop until the number is guessed

    do
    {
       printf("Guess a number between 1 to 100 :");
       scanf("%d" , &guess); 
       
       if (guess>number)
       {
           printf("Lower number please!\n\n");
       }
       else if (guess<number)
       {
           printf("Higher number please!\n\n");
       }
       else if (guess == number)
       {
           printf("You guessed it in %d attempts" , nuumber_of_guesses);
       }
       else if (nuumber_of_guesses == 10)
       {
           printf("You took more than 10 attempts so you have lost the game");
           break;
       }

         nuumber_of_guesses ++;

    } while (guess!=number);
    
    
    return 0;
}