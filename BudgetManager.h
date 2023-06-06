#ifndef BUDGETMANAGER_H
#define BUDGETMANAGER_H

#include <iostream>
#include <vector>

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
}
;

#endif
