#include "counted.h"

int counted::Number;
int counted::LastNumber;
std::vector<int> counted::used_id;

int counted::getid()
{
  return id;
}

void counted::SetId(int number)
{
  if (number != LastNumber)
  {
    for (unsigned int i = 0; i < used_id.size(); i++)
    {
      if (used_id[i] != -1)
      {
        id = used_id[i];
        used_id[i] = -1;
      }
    }
    Number++;
  }
}

counted::counted()
{
  Number++;
  LastNumber++;
  id = Number;
  SetId(Number);
}

counted::counted(const counted& NextId)
{
  Number = NextId.Number;
  SetId(Number);
}

counted& counted::operator=(const counted& NextId)
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

counted::~counted()
{
  used_id.push_back(id);
  Number--;
}
