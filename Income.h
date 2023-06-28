#ifndef INCOME_H
#define INCOME_H

#include <iostream>
#include <string>

using namespace std;

class Income
{
    int incomeId;
    int userId;
    string date;
    int item;
    int amount;

public:
    Income(int incomeId=0, int userId=0, string date="", int item=0, int amount=0)
    {
        this->incomeId = incomeId;
        this->userId = userId;
        this->date = date;
        this->item = item;
        this->amount = amount;
    }

    Income();
}
;


#endif
