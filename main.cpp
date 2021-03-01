#include <iostream>
#include <vector>

using namespace std;

class Counted
{
private:
  int id;
  static int count;
  static int max_count;
  static std::vector<int> deleted_id;
  void set_id(int count)
  {
    if (count != max_count)
    {
      unsigned int vec_size = deleted_id.size();
      for (unsigned int i = 0; i < vec_size; i++)
      {
        if (deleted_id[i] != -1)
        {
          id = deleted_id[i];
          deleted_id[i] = -1;
          break;
        }
      }
      this->count++;
    }
    else
        this->id = count;
  }

public:
  Counted()
  {
      max_count++;
      set_id(++count);
  }
  int get_id()
  {
      return id;
  }

  ~Counted()
  {
    deleted_id.push_back(id);
    if (count > 0)
        count--;
  }

  Counted(const Counted& other)
  {
      count = other.count;
      set_id(count);
  }
  Counted(Counted&&) = default;

  Counted& operator=(const Counted& other)
  {
      if (this == &other)
        return *this;
      count = other.count;
      set_id(count);
      return *this;
  }
  Counted& operator=(Counted&&) = default;
  static unsigned int get_count()
  {
      return count;
  }
};

int Counted::count = 0;
int Counted::max_count = 0;
std::vector<int> Counted::deleted_id;


int main()
{
    Counted *ob1 = new Counted();
    Counted *ob2 = new Counted();
    cout << ob1->get_id() << endl;
    cout << ob2->get_id() << endl;
    cout << Counted::get_count() << endl;
    delete ob2;
    cout << Counted::get_count() << endl;
    return 0;
}
