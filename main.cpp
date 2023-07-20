#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>

#include "Markup.h"
#include "PersonalBudget.h"

using namespace std;

int main()
{
    PersonalBudget personalBudget("fileWithExpenses.xml", "fileWithIncomes.xml", "fileWithUsers.xml");

    char choice;

    while (true)
    {
        if(!personalBudget.isUserLoggedIn())
        {
            choice = personalBudget.chooseOptionFromMainMenu();

            switch (choice)
            {
            case '1':
                personalBudget.userRegistration();
                break;
            case '2':
                personalBudget.userLogin();
                break;
            case '3':
                personalBudget.userLogout();
                break;
            case '7':
                exit(0);
                break;

            default:
                cout << "Incorrect choice, please try again" << endl;
                system("pause");
                break;
            }
        }

        else
        {
            choice = personalBudget.chooseOptionFromUserMenu();

            switch (choice)
            {
            case '1':
                personalBudget.addIncome();
                break;
            case '2':
                personalBudget.showAllIncomes();
                break;
            case '3':
                personalBudget.addExpense();
                break;
            case '4':
                personalBudget.showAllExpenses();
                break;
            case '5':
                personalBudget.financialStatementCurrentMonth();
                break;
            case '6':
                personalBudget.financialStatementPreviousMonth();
                break;
            case '7':
                personalBudget.financialStatementChoosenTimePeriod();
                break;
            case '8':

                break;

            default:
                cout << "Incorrect choice, please try again" << endl;
                system("pause");
                break;
            }
        }

    }
    return 0;
}

