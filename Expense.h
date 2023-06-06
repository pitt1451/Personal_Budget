#ifndef EXPENSE_H
#define EXPENSE_H

#include <iostream>
#include <string>

using namespace std;

class Expense
{
    int expenseId;
    string userId;
    string date;
    int item;
    int amount;

public:
    void Expense();
}
;


#endif
