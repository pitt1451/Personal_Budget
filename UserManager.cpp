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
    cout << "USER REGISTRATION" << endl;
    User user = setNewUserData();
    users.push_back(user);

    userFile.addUserToFile(user);

    cout << endl << "Your account has been successfully created" << endl << endl;
    system("pause");
}

void UserManager::logInUser()
{
    string login = "", password = "";

    cout << "USER LOG-IN: " << endl;
    cout << "Please give a login: ";
    cin >> login;

    for (int i = 0; i < (int)users.size(); i++)
    {
        if (users[i].getLogin() == login)
        {
            for (int numberOfAttempts = 3; numberOfAttempts > 0; numberOfAttempts--)
            {
                cout << "Enter a password. Attempts left: " << numberOfAttempts << ": ";
                cin >> password;

                if (users[i].getPassword() == password)
                {
                    cout << endl << "You have correctly logged in" << endl << endl;
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
    cin >> newPassword;

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
        cin >> login;
        user.setLogin(login);
    }
    while (ifLoginExists(login));

    string password;
    cout << "Please enter your password: ";
    cin >> password;
    user.setPassword(password);

    return user;
}
