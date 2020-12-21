#ifndef COUNTED_H
#define COUNTED_H
#include <iostream>
#include <set>

using namespace std;

class Counted{  

    friend std::ostream& operator<<(std::ostream& out, const Counted& count);

public:
    Counted();

    Counted(const Counted& source);

    Counted& operator=(const Counted& source);

    ~Counted();

private:

    int id;

    static set<int> used_id;

    static int generate_id();

    static void add_id(int id);

    static void remove_id(int id);

    static bool is_used(int id);

};



#endif // COUNTED_H
