#include <iostream>
#include <cstdlib>

#include "PersonalBudget.h"
#include "BudgetManager.h"
#include "UserManager.h"

using namespace std;

char PersonalBudget::chooseOptionFromMainMenu()
{
    char choice;
    system("cls");
    cout << " >>>>>>> PERSONAL BUDGET - PLEASE REGISTER OR LOGIN <<<<<<< " << endl;
    cout << "*****************************" << endl;
    cout << " 1. Register new user" << endl;
    cout << " 2. Login user" << endl;
    cout << " 7. Exit" << endl;
    cout << " *****************************" << endl;
    cout << " Please chooose: 1, 2, or 7: " << endl;

    cin >> choice;
    return choice;
}

char PersonalBudget::chooseOptionFromUserMenu()
{
    char choice;
    system("cls");

    cout << ">>>>>>> PERSONAL BUDGET - MAIN MENU <<<<<<<" << endl;
    cout << "*******************************************" << endl << endl;
    cout << " INCOMES:" << endl << endl;
    cout << " 1. Add new income" << endl;
    cout << " 2. Show all incomes" << endl;
    cout << " 3. Group incomes by date" << endl;
    cout << " 4. Search incomes by given date" << endl << endl << endl;

    cout << " EXPENSES:" << endl << endl;
    cout << " 5. Add new expense" << endl;
    cout << " 6. Show all expenses" << endl;
    cout << " 7. Group expenses by date" << endl;
    cout << " 8. Search expenses by given date" << endl;

    cout << endl;
    cout << " 9. Show cash difference " << endl;

    cout << " Please chooose the right number" << endl;

    cin >> choice;

    return choice;
}

void PersonalBudget::addIncome()
{
    cout << "addIncome() works!" << endl;
}

void PersonalBudget::showAllIncomes()
{

}

void PersonalBudget::addExpense()
{
    cout << "addExpense() works!" << endl;
}

void PersonalBudget::showAllExpenses()
{

}

void PersonalBudget::financialStatementCurrentMonth()
{
    cout << "financialStatementCurrentMonth() works!" << endl;
}

void PersonalBudget::financialStatementPreviousMonth()
{
    cout << "financialStatementPreviousMonth() works!" << endl;
}

void PersonalBudget::financialStatementChoosenTimePeriod()
{
    cout << "financialStatementChoosenTimePeriod() works!" << endl;
}

void PersonalBudget::changePasswordLoggedUser()
{
    cout << "changePasswordLoggedUser() works!" << endl;
}

void PersonalBudget::userLogout()
{
    cout << "userLogout() works!" << endl;
}

void PersonalBudget::userRegistration()
{
    cout << "userRegistration() works!" << endl;
    system("pause");
}

void PersonalBudget::userLogin()
{
    cout << "userLogin() works!" << endl;
}

bool PersonalBudget::isUserLoggedIn()
{
    return userManager.isUserLoggedIn();
}
