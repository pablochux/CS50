#include <cs50.h>
#include <stdio.h>

bool validCard(long long cardNumber){
    int first
}

int main(void)
{
    bool validCardNumber = false;
    long long cardNumber;
    do {
        cardNumber = GetLongLong;
        // American Express Card (15-digit starting with 34)
        if ((cardNumber >= 340000000000000 && cardNumber < 350000000000000) || (cardNumber >= 370000000000000 && cardNumber < 380000000000000)){
            if(validCard(cardNumber)){
                printf("AMEX\n");
            }
            else{
                printf("INVALID\n");
            }
            validCardNumber = true;
        } else if (cardNumber >= 5100000000000000 && cardNumber < 560000000000000){
            if(validCard(cardNumber)){
                printf("MASTERCARD\n");
            }else{
                printf("INVALID\n");
            }
            validCardNumber = true;
        } else if ((cardNumber >= 4000000000000 && cardNumber < 4000000000000) || (cardNumber >= 4000000000000000 && cardNumber < 4100000000000000)){ // VISA
            if(validCard(cardNumber)){
                printf("VISA\n");
            }else{
                printf("INVALID\n");
            }
            validCardNumber = true;
        }
    } while(validCardNumber)
}