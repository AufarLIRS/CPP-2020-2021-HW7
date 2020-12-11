#ifndef COUNTED_H
#define COUNTED_H

class Counted
{
    unsigned int id;
    static int count;

public:
    unsigned int get_id();
    Counted();
    ~Counted();

    Counted(const Counted&);
    Counted& operator=(const Counted&);

    Counted(Counted&&) = delete;
    Counted& operator=(Counted&&) = delete;
};

#endif // COUNTED_H
