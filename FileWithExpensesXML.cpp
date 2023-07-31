#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>

#include "FileWithExpensesXML.h"
#include "AuxiliaryMethods.h"
#include "Markup.h"

using namespace std;

void saveUserExpenseToFile(Expense expense)
{

}

void LoadFileWithExpenses()
{
     CMarkup xml;

    bool fileExists = xml.Load("users.xml");

    if (!fileExists)
    {
        xml.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        xml.AddElem("Users");
    }

    AuxiliaryMethods ObjectAuxiliaryMethods;
    string CurrentDate = ObjectAuxiliaryMethods.getCurrentDate();

    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("User");
    xml.IntoElem();
    xml.AddElem("UserId", "1");
    xml.AddElem("Login", "Piotr");
    xml.AddElem("Password", "123");
    xml.AddElem("CurrentDate", CurrentDate);
    xml.Save("users.xml");
}

FileWithExpensesXML::FileWithExpensesXML()
{

}
