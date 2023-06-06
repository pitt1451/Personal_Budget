#ifndef USERFILE_H
#define USERFILE_H

#include <iostream>
#include <string>

using namespace std;

class UserFile
{
public:
    void addUserToFile();
    vector <user> loadUserFromFile();
}
;


#endif
