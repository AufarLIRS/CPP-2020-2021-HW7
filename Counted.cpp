#include "counted.h"

int Counted::Number;
int Counted::LastNumber;
std::vector<int> Counted::used_id;

int Counted::GetId()
{
  return Id;
}

void Counted::SetId(int number)
{
  if (number != LastNumber)
  {
    for (unsigned int i = 0; i < used_id.size(); i++)
    {
      if (used_id[i] != -1)
      {
        Id = used_id[i];
        used_id[i] = -1;
      }
    }
    Number++;
  }
}

Counted::Counted()
{
  Number++;
  LastNumber++;
  Id = Number;
  SetId(Number);
}

Counted::Counted(const Counted& NextId)
{
  Number = NextId.Number;
  SetId(Number);
}

Counted& Counted::operator=(const Counted& NextId)
{
  if (this == &NextId)
  {
    return *this;
  }
  else
    ;
  Number = NextId.Number;
  SetId(Number);
  return *this;
}

Counted::~Counted()
{
  used_id.push_back(Id);
  Number--;
}
