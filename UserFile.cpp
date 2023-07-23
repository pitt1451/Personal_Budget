#include "UserFile.h"
#include "User.h"
#include "Markup.h"

void UserFile::addUserToFile(User user)
{
    CMarkup xml;

    bool fileExists = xml.Load("UserFile.xml");

    if(!fileExists)
    {
        xml.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        xml.AddElem("Users");
    }

    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("User");
    xml.IntoElem();
    xml.AddElem("login", user.getLogin());
    xml.AddElem("password", user.getPassword());

    xml.Save("UserFile.xml");

    cout << "User has been successfully added to file" << endl;
}

vector <User> UserFile::loadUsersFromFile()
{
    vector <User> users;
    cout << "User has been successfully loaded from file" << endl;

    return users;
}
