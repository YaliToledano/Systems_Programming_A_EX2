#include <stdio.h>
#include "myBank.h"
#define acountnumbers 50
#define accountid 901
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

void open(double ‫‪amount‬‬)
{
    int acount = findOpenAccount();

    if (acount == -1)
    {
        printf("There is no open account available");
        return -1;
    }

    data[acount][0] = (double)1;
    data[acount][1] = ‫‪amount‬‬;

    printf("%d", (int)(acount + accountid));
    return acount + accountid;
}

void balance(account_number)
{
    int index = account_number - accountid;
    if (index >= acountnumbers && index < 0)
    {
        printf("The account you have been inserted is not valid");
        return -1;
    }
    if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is closed");
    }
    printf("%lf", data[index][1]);
}

void deposit(int account_number, double amount)
{
    int index = account_number - accountid;
    if (index >= acountnumbers && index < 0)
    {
        printf("The account you have been inserted is not valid");
        return -1;
    }
    if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is closed");
    }

    data[index][1] += amount;
    printf("%lf", data[index][1]);
}

void withdrawal(int account_number, double amount)
{
    int index = account_number - accountid;
    if (index >= acountnumbers && index < 0)
    {
        printf("The account you have been inserted is not valid");
        return -1;
    }
    if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is closed");
    }

    if (data[index][1] < amount)
    {
        printf("This account don't have enough cash for withdrawal for the amount you have been inserted");
    }

    data[index][1] -= amount;
    printf("%lf", data[index][1]);
}

void close(int account_number)
{
    int index = account_number - accountid;
    if (index >= acountnumbers && index < 0)
    {
        printf("The account you have been inserted is not valid");
        return -1;
    }
    if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is Already closed");
    }

    data[index][1] =  0.0;
    data[index][0] =  0.0;
    printf("Account closed successfully");
}

void close(int account_number)
{
    int index = account_number - accountid;
    if (index >= acountnumbers && index < 0)
    {
        printf("The account you have been inserted is not valid");
        return -1;
    }
    if ((int)data[index][0] == 0)
    {
        printf("The account you have been inserted is Already closed");
    }

    data[index][1] =  0.0;
    data[index][0] =  0.0;
    printf("Account closed successfully");
}

void interest(double interest)
{
    for(int i = 0; i < acountnumbers; i++)
    {
        
    }
}