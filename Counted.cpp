#include "Counted.h"
#include <set>

std::set<int> Counted::used_id;


Counted::Counted() : id(Counted::generate_id())
{
    Counted::add_id(id);
}

int Counted::get_id()
{
    return id;
}

int Counted::generate_id()
{
    static unsigned int id = 1;

    while(Counted::is_used(id))
    {
        ++id;
    }

    return id;

}

void Counted::add_id(int id)
{
    used_id.insert(id);
}

void Counted::remove_id(int id)
{
    used_id.erase(id);
}


bool Counted::is_used(int id)
{
    return used_id.count(id) == 1;
}


Counted::~Counted()
{
    Counted::remove_id(id);
}

