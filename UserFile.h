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
    void addUserToFile(User user);
    vector <User> loadUserFromFile();
};


#endif
