#ifndef FILEWITHEXPENSESXML_H
#define FILEWITHEXPENSESXML_H

#include <iostream>
#include <string>
#include <vector>

#include "Expense.h"

using namespace std;

class FileWithExpensesXML
{
    int expenseId;

    public:
        FileWithExpensesXML();


    vector <Expense> loadUserExpenses();
    void saveUserExpenseToFile();

    void loadFileWithExpenses();
};


#endif
