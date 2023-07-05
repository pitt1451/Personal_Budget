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

        choice = personalBudget.chooseOptionFromMainMenu();
        choice = personalBudget.chooseOptionFromUserMenu();
        switch (choice)
        {
        case '1':

            break;

        case '2':

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
    return 0;
}

