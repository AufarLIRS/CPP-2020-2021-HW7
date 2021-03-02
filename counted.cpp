#include "counted.h"

int Counted::count;
int Counted::max_count;
std::vector<int> Counted::vecOfDelIDs;

void Counted::set_id(int count)
{
  if (count != max_count)
  {
    unsigned int vec_size = vecOfDelIDs.size();
    unsigned int i = 0;
    while (i < vec_size)
    {
      if (vecOfDelIDs[i] != -1)
      {
        id = vecOfDelIDs[i];
        vecOfDelIDs[i] = -1;
        break;
      }
      i++;
    }
  }
}

unsigned int Counted::getId()
{
  return id;
}

Counted::Counted()
{
  count++;
  max_count++;
  id = count;
  set_id(count);
}

Counted::~Counted()
{
  vecOfDelIDs.push_back(id);
  count--;
}

Counted& Counted::operator=(const Counted& next)
{
  if (this == &next)
    return *this;
  count = next.count;
  set_id(count);
  return *this;
}

Counted::Counted(const Counted& next)
{
  count = next.count;
  set_id(count);
}
