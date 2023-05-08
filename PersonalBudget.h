#ifndef PERSONALBUDGET_H
#define PERSONALBUDGET_H

#include <iostream>

using namespace std;

class PersonalBudget
{

public:
    PersonalBudget(string fileWithExpensesXML, string fileWithIncomesXML,
    string fileWithUsersXML);

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
