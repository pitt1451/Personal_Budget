#ifndef PERSONALBUDGET_H
#define PERSONALBUDGET_H

#include <iostream>

#include "BudgetManager.h"
#include "UserManager.h"

using namespace std;

class PersonalBudget
{
    BudgetManager budgetManager;
    UserManager userManager;

public:
    PersonalBudget(string fileWithExpensesXML, string fileWithIncomesXML, string fileWithUsersXML)
    : budgetManager(fileWithExpensesXML, fileWithIncomesXML)
    {
    }

    ~PersonalBudget()
    {

    }

    void addIncome();
    void addExpense();
    void financialStatementCurrentMonth();
    void financialStatementPreviousMonth();
    void financialStatementChoosenTimePeriod();
    void changePasswordLoggedUser();
    void userLogout();
    void userRegistration();
    void userLogin();
};

#endif
