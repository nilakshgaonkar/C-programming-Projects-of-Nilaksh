// THIS IS A DIGITAL CLOCK

#include <stdio.h>
// #include <windows.h>

int main()
{
    int hours , min , sec;
    // int delay = 1000; // we add a delay of 100 miliseconds and we will use it int the functon sleep

    printf("Set the time \n");

    printf("Enter the hours : ");
    scanf("%d" , &hours);

    printf("Enter the minuites : ");
    scanf("%d" , &min);

    printf("Enter the seconds : ");
    scanf("%d" , &sec);


    if (hours > 24 ||min > 60 || sec > 60)
    {
        printf("Error!");
        // exit(0);
    }

    while(hours > 24) // this is an infinite loop and anything inside it will repeat itself infinitely
    {
        sec++;
        if (sec > 59)
        {
            min++;
            sec = 0;
        }

        if (min > 59)
        {
            hours ++;
            min = 0;
        }

        if (hours > 24)
        {
            hours = 1;
        }
        
    }

    printf("\n\n Digital Clock :");
    printf("\n%02d : %02d : %02d" , hours , min , sec); // This writes our time in this format --> 00 : 00 : 00
    // sleep(delay); // The functin sleep slows down the while loop and make it more look like a real clock

    // system("cls"); // This clears the sclreen
    

    return 0;
}