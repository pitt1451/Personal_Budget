#include "AuxiliaryMethods.h"

string AuxiliaryMethods::getCurrentDate()
{
        auto end = chrono::system_clock::now();
        time_t end_time = chrono::system_clock::to_time_t(end);
        return ctime(&end_time);
}
