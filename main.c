#include <stdio.h>
#include "myBank.h"

int main()
{
    char c;
    printf("Enter the action you want to take (O, B, D, W, C, I, P, E):");
    scanf("%c", &c);
    while (c)
    {
        switch (c)
        {
        case 'O':
            printf("Enter the amount you want in your account:");
            double amount;
            scanf("%lf", &amount);
            open(amount);
            break;

        case 'B':

            break;
        default:
            printf("bla bla bla");
        } 
        
        printf("Enter the action you want to take (O, B, D, W, C, I, P, E):");
        scanf("%c", &c);
    }
}