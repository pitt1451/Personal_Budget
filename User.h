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
    void setId();
    void setName();
    void setSurname();
    void setLogin();
    void setPassword();
    int getId();
    string getName();
    string getSurname();
    string getLogin();
    string getPassword();
}
;


#endif
