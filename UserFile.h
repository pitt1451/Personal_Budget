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
    UserFile(string userFileName) {};

    void addUserToFile(User user);
    vector <User> loadUsersFromFile();
};


#endif
