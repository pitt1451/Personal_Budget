#ifndef AUXILIARYMETHODS_H
#define AUXILIARYMETHODS_H

#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>

using namespace std;

class AuxiliaryMethods
{
    bool checkYear(string date);
    bool checkMonth(string date);
    bool checkDay(string date);

public:
    string getCurrentDate();
    static string readLine();
};


#endif
