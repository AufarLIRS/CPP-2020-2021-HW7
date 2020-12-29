#include "counted.h"

int Counted::num;
int Counted::lnum;
std::vector<int> Counted::used_id;

int Counted::getID()
{
    return ID;
}

void Counted::setID(int num)
{
    if (num != lnum)
    {
        for (unsigned int i = 0; i < used_id.size(); i++)
        {
        if (used_id[i] != -1)
        {
            ID = used_id[i];
            used_id[i] = -1;
        }
        }
        num++;
    }
}

Counted::Counted()
{
    num++;
    lnum++;
    ID = num;
    setID(num);
}

Counted::Counted(const Counted& NextId)
{
    num = NextId.num;
    setID(num);
}

Counted& Counted::operator=(const Counted& NextId)
{
    if (this == &NextId)
    {
        return *this;
    }
    num = NextId.num;
    setID(num);
    return *this;
}

Counted::~Counted()
{
    used_id.push_back(ID);
    num--;
}
