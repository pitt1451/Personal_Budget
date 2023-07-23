#include "UserFile.h"
#include "User.h"
#include "Markup.h"

void UserFile::addUserToFile(User user)
{
    CMarkup xml;

    bool fileExists = xml.Load("fileWithUsers.xml");

    if(!fileExists)
    {
        xml.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        xml.AddElem("Users");
    }

    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("User");
    xml.IntoElem();
    xml.AddElem("id", user.getId());
    xml.AddElem("login", user.getLogin());
    xml.AddElem("password", user.getPassword());

    xml.Save("fileWithUsers.xml");

    cout << "User has been successfully added to file" << endl;
}

vector <User> UserFile::loadUsersFromFile()
{
    vector <User> users;
    CMarkup xml;

    bool fileExists = xml.Load("fileWithUsers.xml");

    if (fileExists)
    {
        xml.FindElem("Users");
        xml.IntoElem();

        while (xml.FindElem("User"))
        {
            xml.IntoElem();
            User user;
            while (xml.FindElem())
            {
                int userIdFromFileWithUsers;
                string valueOfUserData = xml.GetData();
                string nameOfUserData = xml.GetTagName();
                if (nameOfUserData == "id")
                {
                    userIdFromFileWithUsers = stoi(valueOfUserData);
                    user.setId(userIdFromFileWithUsers);
                }
                else if (nameOfUserData == "login")
                {
                    user.setLogin(valueOfUserData);
                }
                else if (nameOfUserData == "password")
                {
                    user.setPassword(valueOfUserData);
                }
            }
            users.push_back(user);
            xml.OutOfElem();
        }
        cout << "Users have been successfully loaded from file" << endl;
        system("pause");
    }
    return users;
}
