#include "UserManager.h"
#include "UserFile.h"
#include "User.h"
#include "AuxiliaryMethods.h"

int UserManager::getLoggedUserId()
{
    return loggedUserId;
}

void UserManager::registerUser()
{
    cout << endl << "USER REGISTRATION" << endl << endl;
    User user = setNewUserData();
    users.push_back(user);

    userFile.addUserToFile(user);

    cout << endl << "Your account has been successfully created" << endl << endl;
    system("pause");

    for (User user: users)
    {
        cout << user.getLogin() << endl;
    }
    system("pause");
}

void UserManager::logInUser()
{
    string login = "", password = "";

    cout << "USER LOG-IN: " << endl;
    cout << "Please give a login: ";
    login = AuxiliaryMethods::readLine();

    for (int i = 0; i < (int)users.size(); i++)
    {
        if (users[i].getLogin() == login)
        {
            for (int numberOfAttempts = 3; numberOfAttempts > 0; numberOfAttempts--)
            {
                cout << "Enter a password. Attempts left: " << numberOfAttempts << ": ";
                password = AuxiliaryMethods::readLine();

                if (users[i].getPassword() == password)
                {
                    cout << endl << "You have correctly logged in" << endl << endl;
                    system("pause");
                    loggedUserId = getLoggedUserId();
                    return;
                }
            }
            cout << "The wrong password has been entered 3 times" << endl;
            system("pause");
            return;
        }
    }
    cout << "No user available with entered login" << endl << endl;
    system("pause");
    return;
}

void UserManager::logOutUser()
{
    loggedUserId = 0;
}

void UserManager::changeLoggedUserPassword()
{
    string newPassword = "";
    cout << "Please enter new password: ";
    newPassword = AuxiliaryMethods::readLine();

    for (int i=0; i < (int) users.size(); i++)
    {
        if (users[i].getId() == loggedUserId)
        {
            users[i].setPassword(newPassword);
            cout << "Password has been successfully changed." << endl;
            system("pause");
        }
    }
}

int UserManager::getNewUserId()
{
    return users.empty() ? 1 : (users.back().getId() + 1);
}

bool UserManager::ifLoginExists(string login)
{
    for (int i = 0; i < (int) users.size(); i++)
    {
        if (users[i].getLogin() == login)
        {
            cout << endl << "There is a user with this login. Please try another login" << endl;
            return true;
        }
    }
    return false;
}

User UserManager::setNewUserData()
{
    User user;
    user.setId(getNewUserId());

    string login;
    do
    {
        cout << "Please enter your login: ";
        login = AuxiliaryMethods::readLine();
        user.setLogin(login);
    }
    while (ifLoginExists(login));

    string password;
    cout << "Please enter your password: ";
    password = AuxiliaryMethods::readLine();
    user.setPassword(password);

    return user;
}

bool UserManager::isUserLoggedIn()
{
    return (loggedUserId > 0);
}
