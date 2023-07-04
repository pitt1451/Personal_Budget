#ifndef PERSONALBUDGET_H
#define PERSONALBUDGET_H

#include <iostream>

#include "BudgetManager.h"
#include "UserManager.h"

using namespace std;

class PersonalBudget
{
    UserManager userManager;
    BudgetManager *budgetManager;
    const string INCOMES_FILE_NAME;
    const string EXPENSES_FILE_NAME;

public:
    PersonalBudget(string expensesFileName, string incomesFileName, string usersFileName)
    : userManager(usersFileName), INCOMES_FILE_NAME(incomesFileName), EXPENSES_FILE_NAME(expensesFileName)
    {
        budgetManager = nullptr;
    }

    ~PersonalBudget()
    {

    }

    void userRegistration();
    void userLogin();
    void userLogout();
    void addIncome();
    void addExpense();
    void financialStatementCurrentMonth();
    void financialStatementPreviousMonth();
    void financialStatementChoosenTimePeriod();
    void changePasswordLoggedUser();
};

#endif
