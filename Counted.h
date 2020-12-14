#ifndef COUNTED_H
#define COUNTED_H
#include <set>

class Counted{

    unsigned int id;
    static std::set<unsigned int> used_id;


    static int generate_id();

    static void add_id(int id);

    static void remove_id(int id);

    static bool is_used(int id);

public:
    explicit Counted();

    int get_id();

    ~Counted();
};



//class Counted {

//    int id;
//    static int next_id;

//public:

//    Counted();

//    Counted(const Counted& orig);

//    int get_id();

//    Counted& operator=(const Counted& orig);

//};

#endif // COUNTED_H
