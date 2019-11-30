#ifndef MYLIB_H
#define MYLIB_H
#define acountnumbers 50
#define accountid 901
extern double data[acountnumbers][2];

int findOpenAccount();

void open(double amount);

void balance(int account_number);

void deposit(int account_number, double amount);

void withdrawal(int account_number, double amount);

void close(int account_number);

void interest(double interest);

void print();

void closeAll();

#endif