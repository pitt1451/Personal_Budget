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
    User setNewUserData();

public:

    UserManager(string userFileName) : userFile(userFileName)
    {
        loggedUserId = 0;
        users = userFile.loadUsersFromFile();
    }
    void registerUser();
    void logInUser();
    void logOutUser();
    void changeLoggedUserPassword();
    bool ifLoginExists(string login);
    int getLoggedUserId();
    int getNewUserId();

    bool isUserLoggedIn();
};

#endif
