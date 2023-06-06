#ifndef FILEWITHEXPENSESXML_H
#define FILEWITHEXPENSESXML_H

#include <iostream>
#include <string>

using namespace std;

class FileWithExpensesXML
{
    int expenseId;

    vector <Expense> loadUserExpenses();
    void saveUserExpenseToFile();
}
;


#endif
