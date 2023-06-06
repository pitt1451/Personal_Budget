#ifndef FILEWITHINCOMESXML_H
#define FILEWITHINCOMESXML_H

#include <iostream>
#include <string>

using namespace std;

class FileWithIncomesXML
{
    int incomeId;

    vector <Income> loadUserIncomes();
    void saveUserIncomeToFile();
}
;


#endif
