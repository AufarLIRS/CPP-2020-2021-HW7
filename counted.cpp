#include <counted.h>

int Counted::count;

unsigned int Counted::get_id()
{
    return id;
}

Counted::Counted()
{
    count++;
    id = count;
}

Counted::~Counted()
{
    count--;
}

Counted::Counted(const Counted& right)
{
    count = right.count;
}

Counted& Counted::operator=(const Counted& right)
{
    count = right.count;
    return *this;
}
