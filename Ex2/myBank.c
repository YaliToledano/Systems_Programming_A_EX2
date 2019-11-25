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

    printf("%d",acount + accountid);
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
    if(data[index][0]==0)
    {
        printf("The account you have been inserted is closed");
    }
    printf("%d",data[index][1]);
}

void deposit(int account_number, double ‫‪amount‬‬)
{
    int index = account_number - accountid;
    if (index >= acountnumbers && index < 0)
    {
        printf("The account you have been inserted is not valid");
        return -1;
    }
    if(data[index][0]==0)
    {
        printf("The account you have been inserted is closed");
    }

    data[index][1] += amount;

}