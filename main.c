#include <stdio.h>
#include "myBank.h"

int main()
{
    char c;
    int flag = 0;
    int account;
    double amount;
    printf("Enter the action you want to take (O, B, D, W, C, I, P, E):");
    scanf(" %c", &c);
    while (flag == 0)
    {
        switch (c)
        {
        case 'O':
            printf("Enter the amount you want in your account:");
            if (scanf("%lf", &amount) == 1)
            {
                open(amount);
            }
            else
            {
                printf("Invalid input\n");
            }
            break;

        case 'B':
            printf("Enter account number:");
            if (scanf("%d", &account) == 1)
            {
                balance(account);
            }
            else
            {
                printf("Invalid input\n");
            }

            break;

        case 'D':
            printf("Enter account number:");
            if (scanf("%d", &account) == 1)
            {
                printf("Enter the amount you want to deposit:");
                if (scanf("%lf", &amount) == 1)
                {
                    deposit(account, amount);
                }
                else
                {
                    printf("Invalid input\n");
                }
            }
            else
            {
                printf("Invalid input\n");
            }
            break;

        case 'W':
            printf("Enter account number:");
            if (scanf("%d", &account) == 1)
            {
                printf("Enter the amount you want to withdrawal:");
                if (scanf("%lf", &amount) == 1)
                {
                    withdrawal(account, amount);
                }
                else
                {
                    printf("Invalid input\n");
                }
            }
            else
            {
                printf("Invalid input\n");
            }
            break;

        case 'C':
            printf("Enter account number:");
            if (scanf("%d", &account) == 1)
            {
                close(account);
            }
            else
            {
                printf("Invalid input\n");
            }
            break;

        case 'I':
            printf("Enter the interest you do want to add:");
            double inter;
            if (scanf("%lf", &inter) == 1)
            {
                interest(inter);
            }
            else
            {
                printf("Invalid input\n");
            }
            break;

        case 'P':
            print();
            break;

        case 'E':
            closeAll();
            flag = 1;

            break;

        default:
            printf("Not Existing Action\n");
        }

        if (flag == 0)
        {
            printf("Enter the action you want to take (O, B, D, W, C, I, P, E):");
            scanf("%c", &c);
        }
    }
}
