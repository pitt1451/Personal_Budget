#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User
{
    int id;
    string name;
    string surname;
    string login;
    string password;

public:
    void setId(int newId);
    void setName();
    void setSurname();
    void setLogin(string newLogin);
    void setPassword(string newPassword);
    int getId();
    string getName();
    string getSurname();
    string getLogin();
    string getPassword();
};

#endif
