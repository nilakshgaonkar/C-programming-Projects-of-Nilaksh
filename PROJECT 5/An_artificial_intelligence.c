#include<stdio.h>
#include<string.h>
#include<time.h>


int main()
{
    char str[100];

    printf("Start chatting with AI\n\n");

    printf("AI : Hi! My name AI 2.o , What is your name?\n\n");
    printf("You : ");
    gets(str);

    if (str == "open youtube")
    {
        system("start hhtps://youtube.com");
    }
    

    printf("AI : Hello %s" , str);

    
    return 0;
}