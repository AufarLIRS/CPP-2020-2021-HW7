#ifndef COUNTED_H
#define COUNTED_H
#include <vector>

class Counted
{
private:
    static std::vector<int> used_id;
    int ID;
    void setID(int number);
    static int num;
    static int lnum;

public:
    int getID();
    Counted();
    Counted(const Counted&);
    Counted& operator =(const Counted&);
    ~Counted();
};

#endif // COUNTED_H
