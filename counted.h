#ifndef COUNTED_H
#define COUNTED_H
#include <vector>

class Counted
{
private:
    unsigned int ID;
    static std::vector<bool> userID;

public:
    Counted();
    Counted& operator=(const Counted& original);
    Counted(const Counted& original);
    ~Counted();
    int getID();
};

#endif // COUNTED_H
