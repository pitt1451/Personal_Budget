#ifndef EXPENSEMANAGER_H
#define EXPENSEMANAGER_H

#include <iostream>

using namespace std;

class ExpenseManager
{


public:
   void addNewExpense();
   void showAllExpenses();
   void groupExpensesByDate();
   void searchExpensesByGivenDate();
};

#endif
