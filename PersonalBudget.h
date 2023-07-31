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

    FileWithIncomesXML incomesFileName;
    FileWithExpensesXML expensesFileName;

public:
    PersonalBudget(string expensesFileName, string incomesFileName, string usersFileName)
        : userManager(usersFileName), INCOMES_FILE_NAME(incomesFileName), EXPENSES_FILE_NAME(expensesFileName)


    {
        budgetManager = nullptr;

            FileWithIncomesXML incomesFile;
        vector<Income> userIncomes = incomesFile.loadUserIncomes();
        budgetManager = new BudgetManager(expensesFileName, incomesFileName, userManager.getLoggedUserId());

    }
        FileWithIncomesXML incomesFile;
        vector<Income> userIncomes = incomesFile.loadUserIncomes();



    ~PersonalBudget()
    {
        delete budgetManager;
        budgetManager = NULL;
    }

    char chooseOptionFromMainMenu();
    char chooseOptionFromUserMenu();
    void userRegistration();
    void userLogin();
    void userLogout();
    void addIncome();
    void addExpense();
    void financialStatementCurrentMonth();
    void financialStatementPreviousMonth();
    void financialStatementChoosenTimePeriod();
    void changePasswordLoggedUser();
    bool isUserLoggedIn();

    void showAllIncomes();
    void groupIncomesByDate();
    void searchIncomesByGivenDate();

    void showAllExpenses();
    void groupExpensesByDate();
    void searchExpensesByGivenDate();


    void loadUserIncomes();
    void loadUserExpenses();

    void showCashDifference();
};

#endif
