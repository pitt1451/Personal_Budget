#include "BudgetManager.h"
#include "Income.h"
#include "FileWithIncomesXML.h"


void BudgetManager::addNewIncome()
{
    Income income = setNewIncome();
    incomes.push_back(income);
    incomesFileName.saveUserIncomeToFile(income);
 }

Income BudgetManager::setNewIncome()
{
    int incomeId, userId, item, amount;
    string date;

    cout << "Enter Income ID: ";
    cin >> incomeId;

    cout << "Enter User ID: ";
    cin >> userId;

    cout << "Enter Date (yyyy-mm-dd): ";
    cin >> date;

    cout << "Enter Item: ";
    cin >> item;

    cout << "Enter Amount: ";
    cin >> amount;

    Income income(incomeId, userId, date, item, amount);
    return income;
}
