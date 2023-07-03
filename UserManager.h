#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <string>
#include <vector>

#include "User.h"
#include "UserFile.h"

using namespace std;

class UserManager
{
    int loggedUserId;
    vector <User> users;
    UserFile userFile;
    int getLoggedUserId();
    int setLoggedUserId();

public:
    UserManager(string userFileName)
    {
    }
    void registerUser();
    void logInUser();
    void logOutUser();
    void changeLoggedUserPassword();

    int getNewUserId();
    bool ifLoginExists(string login);
    User setNewUserData();
};

#endif
