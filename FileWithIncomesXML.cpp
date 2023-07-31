#include "FileWithIncomesXML.h"
#include "Income.h"
#include "User.h"
#include "Markup.h"
#include "BudgetManager.h"

void FileWithIncomesXML::saveUserIncomeToFile(Income income)
{

    CMarkup xml;

    bool fileExists = xml.Load("fileWithIncomes.xml");


    if(!fileExists)
    {
        xml.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        xml.AddElem("Incomes");

        xml.FindElem();
        xml.IntoElem();
        xml.AddElem("Income");

        xml.AddAttrib("incomeId", income.getIncomeId());
        xml.AddAttrib("userId", income.getUserId());
        xml.AddAttrib("date", income.getDate());
        xml.AddAttrib("item", income.getItem());
        xml.AddAttrib("amount", income.getAmount());
        xml.OutOfElem();


        xml.Save("fileWithIncomes.xml");

        cout << "Your income has been successfully added to file" << endl;
        system("pause");
    }
}

vector<Income> FileWithIncomesXML::loadUserIncomes()
{
    vector<Income> incomes;

    CMarkup xml;
    if (xml.Load("fileWithIncomes.xml"))
    {
        xml.FindElem();
        xml.IntoElem();

        while (xml.FindElem("Income"))
        {
            int incomeId = atoi(xml.GetAttrib("incomeId").c_str());
            int userId = atoi(xml.GetAttrib("userId").c_str());
            string date = xml.GetAttrib("date");
            int item = atoi(xml.GetAttrib("item").c_str());
            int amount = atoi(xml.GetAttrib("amount").c_str());

            Income income(incomeId, userId, date, item, amount);
            incomes.push_back(income);
        }

        return incomes;
    }
}

FileWithIncomesXML::FileWithIncomesXML()
{

}
