#ifndef COUNTED_H
#define COUNTED_H
#include <set>

class Counted{

    int id;
    static std::set<int> used_id;


    static int generate_id();

    static void add_id(int id);

    static void remove_id(int id);

    static bool is_used(int id);

public:
    explicit Counted();

    int get_id();

    ~Counted();
};



#endif // COUNTED_H
