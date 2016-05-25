#include <stdio.h>
#include <cs50.h>

int AskForMinutes(){
    int minutes; 
    bool firstTime = true;
    do {
        string message = (firstTime) ? "minutes" : "Retry";
        firstTime = false;
        printf("%s: ", message);
        minutes = GetInt();
    } while(minutes < 1);
    return minutes;
}

int ConvertMinutes(int number){
    return number * 192 / 16;
}

int main(void)
{
    int minutes = AskForMinutes();
    int bottles = ConvertMinutes(minutes);
    printf("bottles: %i\n", bottles);
}