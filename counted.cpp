#include "counted.h"

std::vector<bool> Counted::userID;

Counted::Counted()
{
    bool flag = false;
    for(unsigned int i = 0; i < userID.size(); i++)
    {
        if(userID[i] == false)
        {
            userID[i] = true;
            ID = i + 1;
            flag = true;
            break;
        }
    }
    if(!flag)
    {
        userID.push_back(true);
        ID = userID.size();
    }
}

Counted::Counted(const Counted& user)
{
    ID = user.ID;
}

Counted& Counted::operator=(const Counted &original)
{
    if(this == &original)
        return *this;

    ID = original.ID;
    return *this;

}

Counted::~Counted()
{
    userID[ID - 1] = false;
}

int Counted::getID()
{
    return ID;
}
