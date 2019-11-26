#ifndef _MYLIB_H_
#define _MYLIB_H_

int findOpenAccount();

void open(double amount);

void balance(int account_number);

void deposit(int account_number, double amount);

void withdrawal(int account_number, double amount);

void close(int account_number);

void interest(double interest);

#endif