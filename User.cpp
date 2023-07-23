#include "User.h"

string User::getLogin()
{
    return login;
}

string User::getPassword()
{
    return password;
}

int User::getId()
{
    return id;
}

void User::setLogin(string newLogin)
{
    login = newLogin;
}

void User::setPassword(string newPassword)
{
    password = newPassword;
}

void User::setId(int newId)
{
    if (newId >= 0)
    id = newId;
}
