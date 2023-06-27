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


    return 0;
}

