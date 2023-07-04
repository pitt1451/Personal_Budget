#include "AuxiliaryMethods.h"

string AuxiliaryMethods::getCurrentDate()
{
        auto end = chrono::system_clock::now();
        time_t end_time = chrono::system_clock::to_time_t(end);
        return ctime(&end_time);
}

string AuxiliaryMethods::readLine()
{
    string wejscie = "";
    cin.sync();
    getline(cin, wejscie);
    return wejscie;
}
