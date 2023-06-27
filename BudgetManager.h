#ifndef BUDGETMANAGER_H
#define BUDGETMANAGER_H

#include <iostream>
#include <vector>

#include "User.h"
#include "FileWithUsersXML.h"
#include "FileWithIncomesXML.h"
#include "FileWithExpensesXML.h"
#include "AuxiliaryMethods.h"
#include "Income.h"
#include "Expense.h"

using namespace std;

class BudgetManager
{
    const int ID_LOGGED_USER;
    vector <Income> incomes;
    vector <Expense> expenses;
    FileWithIncomesXML fileWithIncomes;
    FileWithExpensesXML fileWithExpenses;
    void sortCashByDate();

public:
    BudgetManager(string fileWithExpensesXML, string fileWithIncomesXML)
    {

    }

    void addNewIncome();
    void loadUserIncomes();
    void showAllIncomes();
    void groupIncomesByDate();
    void searchIncomesByGivenDate();

    void addNewExpense();
    void loadUserExpense();
    void showAllExpenses();
    void groupExpensesByDate();
    void searchExpensesByGivenDate();

    void showCashDifference();
};

#endif
