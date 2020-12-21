#include "Counted.h"

using namespace std;


set<int> Counted::used_id;

Counted::Counted() : id(Counted::generate_id())
{
    Counted::add_id(id);
}

Counted::Counted(const Counted& source)
{
    cout << "Copy constructor called for "
         << this->id << "_ID" << endl;

    add_id(source.id);
}

Counted& Counted::operator=(const Counted &source)
{
    cout << "Overloaded assignment called for "
         << this->id << "_ID" << endl;

    if(this == &source)
    {
        return *this;
    }

    add_id(source.id);
    return *this;

}


Counted::~Counted()
{
    cout << "Destructor called for " << this->id
               << "_ID @ this memory location " << this << endl;
    Counted::remove_id(id);
}


ostream& operator<<(ostream& out, const Counted& count)
{
    return out << "id is: " << count.id;
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


