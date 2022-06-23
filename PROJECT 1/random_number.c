// A PROGRAMME TO GENERATE RANDOM NUMBER

#include<stdio.h>
#include<stdlib.h>// this iss a library used to generate random number 
#include<time.h>// for the time(0) function

int main()
{
    int number;

    srand(time(0)); 
    number = rand()%100;// generates random number between 1 to 100
    printf("The number is : %d" , number);
    return 0;
}


