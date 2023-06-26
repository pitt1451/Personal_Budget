#ifndef USERFILE_H
#define USERFILE_H

#include <iostream>
#include <string>
#include <vector>

#include "User.h"

using namespace std;

class UserFile
{
public:
    void addUserToFile();
    vector <User> loadUserFromFile();
}
;


#endif
