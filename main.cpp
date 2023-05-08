#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include "Markup.h"
#include "PersonalBudget.h"
#include "AuxiliaryMethods.h"

using namespace std;

//string getCurrentDate(void);

int main()
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

    return 0;
}

/*
    string getCurrentDate()
    {
        auto end = chrono::system_clock::now();
        time_t end_time = chrono::system_clock::to_time_t(end);
        return ctime(&end_time);
    }
*/
