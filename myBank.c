#include <stdio.h>
#include "myBank.h"
double data[acountnumbers][2] = {{0.0}};

double twoDigits(double x)
{
    x = x * 100;
    int y = (int)x;
    x = (double)y / 100;
    return x;
}


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
    amount = twoDigits(amount);
    int acount = findOpenAccount();

    if (acount == -1)
    {
        printf("There is no open account available\n");
    }
    else
    {

        data[acount][0] = (double)1;
        data[acount][1] = amount;
        printf("%d\n", (int)(acount + accountid));
    }
}

void balance(int account_number)
{
    int index = account_number - accountid;
    if (index >= acountnumbers || index < 0)
    {
        printf("The account you have been inserted is not valid\n");
    }
    else if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is closed\n");
    }
    else
    {
        printf("%.2lf\n", data[index][1]);
    }
}

void deposit(int account_number, double amount)
{
    amount = twoDigits(amount);
    int index = account_number - accountid;
    if (index >= acountnumbers || index < 0)
    {
        printf("The account you have been inserted is not valid\n");
    }
    else if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is closed\n");
    }
    else
    {
        data[index][1] += amount;
        printf("%.2lf\n", data[index][1]);
    }
}

void withdrawal(int account_number, double amount)
{
    amount = twoDigits(amount);
    int index = account_number - accountid;
    if (index >= acountnumbers || index < 0)
    {
        printf("The account you have been inserted is not valid\n");
    }
    else if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is closed\n");
    }

    else if (data[index][1] < amount)
    {
        printf("This account don't have enough cash for withdrawal for the amount you have been inserted\n");
    }
    else
    {
        data[index][1] -= amount;
        printf("%.2lf\n", data[index][1]);
    }
}

void close(int account_number)
{
    int index = account_number - accountid;
    if (index >= acountnumbers || index < 0)
    {
        printf("The account you have been inserted is not valid\n");
    }
    else if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is Already closed\n");
    }
    else
    {
        data[index][1] = 0.0;
        data[index][0] = 0.0;
        printf("Account %d closed successfully \n", account_number);
    }
}

void interest(double interest)
{
    if (interest >= (double)0)
    {
        for (int i = 0; i < acountnumbers; i++)
        {
            data[i][1] += (interest/100)*data[i][1];
            data[i][1] = twoDigits(data[i][1]);
        }

    }
}

void print()
{
    for (int i = 0; i < acountnumbers; i++)
    {
        if (data[i][0] == 1.0)
        {
            printf("account: %d amount: %.2lf\n", (i + accountid), (data[i][1]));
        }
    }
}

void closeAll()
{
    for (int i = 0; i < acountnumbers; i++)
    {
        if (data[i][0] == (double)1)
        {
            close(i + accountid);
        }
    }
    printf("All accounts colsed successfully\n");
}