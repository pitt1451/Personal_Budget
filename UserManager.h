#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <string>

using namespace std;

class UserManager
{
    int getLoggedUserId();
    int setLoggedUserId();
    vector <User> users;

    UserFile userFile;

public:
    UserManager(string userFileName)
    {
    }

    void registerUser();
    void logInUser();
    void logOutUser();
    void changeUserPassword();

    int getNewUserId();
    bool ifLoginExists();
    User setNewUserData();
}
;

#endif
