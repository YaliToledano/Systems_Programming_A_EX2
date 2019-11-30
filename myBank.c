#include <stdio.h>
#include "myBank.h"
double data[acountnumbers][2] = {0};

int findOpenAccount()
{
    for (int i = 0; i < acountnumbers; i++)
    {
        if ((int)data[i][0] == 0)
        {
            return i;
        }
    }
    return -1;
}

void open(double amount)
{
    printf("asdsadsadasdas");
    int acount = findOpenAccount();

    if (acount == -1)
    {
        printf("There is no open account available\n");
    }
    else
    {

        data[acount][0] = (double)1;
        data[acount][1] = amount;

        printf("asdsadsadasdas");
        printf("%d", (int)(acount + accountid));
    }
}

void balance(int account_number)
{
    int index = account_number - accountid;
    if (index >= acountnumbers && index < 0)
    {
        printf("The account you have been inserted is not valid");
    }
    else if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is closed");
    }
    else
    {
        printf("%lf", data[index][1]);
    }

    void deposit(int account_number, double amount)
    {
        int index = account_number - accountid;
        if (index >= acountnumbers && index < 0)
        {
            printf("The account you have been inserted is not valid");
        }
        else if ((int)data[index][0] == 0)
        {
            printf("The account you have been inserted is closed");
        }
        else
        {
            data[index][1] += amount;
            printf("%lf", data[index][1]);
        }
    }

    void withdrawal(int account_number, double amount)
    {
        int index = account_number - accountid;
        if (index >= acountnumbers && index < 0)
        {
            printf("The account you have been inserted is not valid");
        }
        else if ((int)data[index][0] == 0)
        {
            printf("The account you have been inserted is closed");
        }

        else if (data[index][1] < amount)
        {
            printf("This account don't have enough cash for withdrawal for the amount you have been inserted");
        }
        else
        {
            data[index][1] -= amount;
            printf("%lf", data[index][1]);
        }
    }

    void close(int account_number)
    {
        int index = account_number - accountid;
        if (index >= acountnumbers && index < 0)
        {
            printf("The account you have been inserted is not valid");
        }
        else if ((int)data[index][0] == 0)
        {
            printf("The account you have been inserted is Already closed");
        }
        else
        {
            data[index][1] = 0.0;
            data[index][0] = 0.0;
            printf("Account closed successfully");
        }
    }

    void interest(double interest)
    {
        if (interest < (double)0)
        {
            for (int i = 0; i < acountnumbers; i++)
            {
                data[i][1] *= (interest + 1);
            }
        }
    }

    void print()
    {
        for (int i = 0; i < acountnumbers; i++)
        {
            if (data[i][0] == 1.0)
            {
                printf("account: %d amount: %lf\n", (int)(data[i][0] + accountid)), (data[i][1]);
            }
        }
    }

    void closeAll()
    {
        for (int i = 0; i < acountnumbers; i++)
        {
            close(i + accountid);
        }
    }